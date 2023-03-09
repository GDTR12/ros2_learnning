#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include "plumbing_interface_demo/action/action_exercise.hpp"
#include "turtlesim/msg/pose.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "rclcpp_action/rclcpp_action.hpp"



using namespace std::chrono_literals;
using plumbing_interface_demo::action::ActionExercise;
using turtlesim::msg::Pose;
using geometry_msgs::msg::Twist;
using std::placeholders::_1;
using std::placeholders::_2;
using std::placeholders::_3;


class EActionServer:public rclcpp::Node{
public:
    EActionServer():Node("EActionServer"){
        RCLCPP_INFO(this->get_logger(),"Create node of EActionServer!");
        
        sub = this->create_subscription<Pose>("/turtle1/pose",10,std::bind(&EActionServer::on_pose_cb,this,_1));
        pub = this->create_publisher<Twist>("/turtle1/cmd_vel",10);
        act = rclcpp_action::create_server<ActionExercise>(
            this,
            "MoveTo",
            std::bind(&EActionServer::on_goal_cb,this,_1,_2),
            std::bind(&EActionServer::on_cancel_cb,this,_1),
            std::bind(&EActionServer::on_accepted_cb,this,_1)
        );
    }
private:
    rclcpp::Subscription<Pose>::SharedPtr sub;
    rclcpp::Publisher<Twist>::SharedPtr pub;
    rclcpp_action::Server<ActionExercise>::SharedPtr act;
    float x,y;
    void on_pose_cb(Pose::SharedPtr pose)
    {
        x = pose->x;
        y = pose->y;
    }

    /* 
        using GoalCallback = std::function<GoalResponse(
                const GoalUUID &, std::shared_ptr<const typename ActionT::Goal>)>;
        /// Signature of a callback that accepts or rejects requests to cancel a goal.
        using CancelCallback = std::function<CancelResponse(std::shared_ptr<ServerGoalHandle<ActionT>>)>;
        /// Signature of a callback that is used to notify when the goal has been accepted.
        using AcceptedCallback = std::function<void (std::shared_ptr<ServerGoalHandle<ActionT>>)>;
     */
    rclcpp_action::GoalResponse on_goal_cb(const rclcpp_action::GoalUUID &, std::shared_ptr<const ActionExercise::Goal> goal)
    {
        if(goal->goal_x < 0 || goal->goal_y < 0 || goal->goal_x > 11.08 || goal->goal_y > 11.08)
        {
            RCLCPP_INFO(this->get_logger(),"Destination coordination invalid");
            return rclcpp_action::GoalResponse::REJECT;
        }
        RCLCPP_INFO(this->get_logger(),"Goal:(%.2f,%.2f,%.2f)",goal->goal_x,goal->goal_y,goal->goal_theta);
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse on_cancel_cb(std::shared_ptr<rclcpp_action::ServerGoalHandle<ActionExercise>>)
    {
        RCLCPP_INFO(this->get_logger(),"Srevice canceled by client");
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void on_accepted_cb(std::shared_ptr<rclcpp_action::ServerGoalHandle<ActionExercise>> feedback)
    {
        std::thread(std::bind(&EActionServer::execute,this,feedback)).detach();
        return;
    }

    void execute(std::shared_ptr<rclcpp_action::ServerGoalHandle<ActionExercise>> goal)
    {
        RCLCPP_INFO(this->get_logger(),"goal:(%.2f,%.2f)",goal->get_goal()->goal_x,goal->get_goal()->goal_y);
        rclcpp::Rate rate(0.5);
        auto result = std::make_shared<ActionExercise::Result>();
        auto feedback = std::make_shared<ActionExercise::Feedback>();
        Twist twist;
        for(;;)
        {
            // 如果要取消任务，需要特殊处理
            if(goal->is_canceling()){
                goal->canceled(result);
                return;
            }
            float goal_x = goal->get_goal()->goal_x;
            float goal_y =  goal->get_goal()->goal_y;
            float distance = std::sqrt(std::pow(goal_x - x,2) + std::pow(goal_y - y,2));
            // 生成连续反馈
            feedback->set__distance(distance);
            goal->publish_feedback(feedback);

            float scale = 0.5;
            float linear_x = scale * (goal_x - x);
            float linear_y = scale * (goal_y - y);
            RCLCPP_INFO(this->get_logger(),"linear_x_y:(%.2f,%.2f)",linear_x,linear_y);
            twist.linear.x = linear_x;
            twist.linear.y = linear_y;
            pub->publish(twist);

            if(distance <= 0.05)
            {
                RCLCPP_INFO(this->get_logger(),"Successed:the error is within the allowable range");
                break;
            }

            rate.sleep();
        }
        if(rclcpp::ok())
        {
            result->finally_x = x;
            result->finally_y = y;
            goal->succeed(result);
        }
    }
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<EActionServer>());
    rclcpp::shutdown();
    return 0;
}
