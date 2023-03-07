
/*  
  需求：编写动作服务端，解析客户端发送的数字，遍历该数值并累加求和最终结果响应客户端，切响应过程中需要生成连续反馈
  步骤：
    1.包含头文件；
    2.初始化 ROS2 客户端；
    3.定义节点类；
      3-1.创建发布方；
      3-2.处理提交的目标值；
      3-3.生成连续反馈最终响应。
      3-4 处理取消请求
    4.调用spin函数，并传入节点对象指针；
    5.释放资源。
*/
#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include "rclcpp_action/rclcpp_action.hpp"

#include "plumbing_interface_demo/action/action_msg.hpp"

using namespace std::chrono_literals;
using plumbing_interface_demo::action::ActionMsg;
using std::placeholders::_1;
using std::placeholders::_2;

class ActionServer:public rclcpp::Node{
public:
    ActionServer():Node("ActionServer"){
        
    // 3-1.创建发布方；
        server_ = rclcpp_action::create_server<ActionMsg>(
            this,
            "ActionNode",
            std::bind(&ActionServer::handler_goal,this,_1,_2),
            std::bind(&ActionServer::handler_cancel,this,_1),
            std::bind(&ActionServer::handler_accepted,this,_1)
            );
        RCLCPP_INFO(this->get_logger(),"Create node of ActionServer!");
    }
private:

    rclcpp_action::Server<ActionMsg>::SharedPtr server_;    

/*     
    3-2.处理提交的目标值；
    std::function<GoalResponse(const GoalUUID &, std::shared_ptr<const typename ActionT::Goal>)>;
*/
    rclcpp_action::GoalResponse handler_goal(const rclcpp_action::GoalUUID &uuid, std::shared_ptr<const ActionMsg::Goal> goal)
    {
        (void)uuid;
        // 判断提交的数字书否大于1，是就接受，否则决绝
        if(goal->num <= 1){
            RCLCPP_INFO(this->get_logger(),"Wrong data detected!:%ld",goal->num);
            return rclcpp_action::GoalResponse::REJECT;
        }
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }
    
/*     
    3-4 处理取消请求
    std::function<CancelResponse(std::shared_ptr<ServerGoalHandle<ActionT>>)>; 
*/
    rclcpp_action::CancelResponse  handler_cancel(const std::shared_ptr<rclcpp_action::ServerGoalHandle<ActionMsg>> goal_handler)
    {
        (void)goal_handler;
        RCLCPP_INFO(this->get_logger(),"Received cancel request!");
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void execute(std::shared_ptr<rclcpp_action::ServerGoalHandle<ActionMsg>> goal_handler){
        //生成连续反馈，返回给客户端
        int num = goal_handler->get_goal()->num;
        int sum = 0;
        auto feedback = std::make_shared<ActionMsg::Feedback>();
        auto result = std::make_shared<ActionMsg::Result>();
        //设置休眠
        rclcpp::Rate rate(1.0);
        for(int i = 0; i <= num; i++)
        {
            sum += i;
            double progress = i/(double)num;
            feedback->progess = progress;
            goal_handler->publish_feedback(feedback);
            RCLCPP_INFO(this->get_logger(),"FeedBack:progress:%.2f",progress);

            if(goal_handler->is_canceling())
            {
                result->sum = sum;
                goal_handler->canceled(result);
                RCLCPP_INFO(this->get_logger(),"Mission canceled unexecpeted!");
                return;
            }

            rate.sleep();
        }

        /* 生成最终响应结果 */
        if(rclcpp::ok())
        {
            
            result->sum = sum;
            goal_handler->succeed(result);
        }
    }

/*     
    3-3.生成连续反馈最终响应。
    std::function<void (std::shared_ptr<ServerGoalHandle<ActionT>>)>;
 */
    void  handler_accepted(std::shared_ptr<rclcpp_action::ServerGoalHandle<ActionMsg>> goal_handler )
    {
        /* 新建主线程处理耗时的主逻辑实现 */
        std::thread(std::bind(&ActionServer::execute,this,goal_handler)).detach();
        return;
    }

    
};


int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ActionServer>());
    rclcpp::shutdown();
    return 0;
}
