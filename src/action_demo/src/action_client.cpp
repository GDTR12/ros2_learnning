/*  
  需求：编写动作客户端实现，可以提交一个整型数据到服务端，并处理服务端的连续反馈以及最终返回结果。
  步骤：
    1.包含头文件；
    2.初始化 ROS2 客户端；
    3.定义节点类；
      3-1.创建动作客户端；
      3-2.发送请求；
      3-3.处理目标发送后的反馈（回调函数）；
      3-4.处理连续反馈（回调函数）；
      3-5.处理最终响应（回调函数）。
    4.调用spin函数，并传入节点对象指针；
    5.释放资源。
*/

#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include "rclcpp_action/rclcpp_action.hpp"
#include "plumbing_interface_demo/action/action_msg.hpp"

using plumbing_interface_demo::action::ActionMsg;
using std::placeholders::_1;
using std::placeholders::_2;
using namespace std::chrono_literals;

class ActionClient:public rclcpp::Node{
public:
    ActionClient():Node("ActionClient"){
        RCLCPP_INFO(this->get_logger(),"Create node of ActionClient!");
        /* 3-1.创建动作客户端； */
        client_ = rclcpp_action::create_client<ActionMsg>(this,"ActionNode");
    }
    void send_goal(int num){
        /* 连接服务端 */
        if(!client_->wait_for_action_server(10s)){
            RCLCPP_ERROR(this->get_logger(),"Connect server failed!");
            return;
        }
        auto goal = ActionMsg::Goal();
        goal.num = num;

        rclcpp_action::Client<plumbing_interface_demo::action::ActionMsg>::SendGoalOptions options;
        options.feedback_callback = std::bind(&ActionClient::on_feedback_cb,this,_1,_2);
        options.goal_response_callback = std::bind(&ActionClient::on_goal_cb,this,_1);
        options.result_callback = std::bind(&ActionClient::on_result_cb,this,_1);
        auto future = client_->async_send_goal(goal,options);
    }
private:

    void on_goal_cb(rclcpp_action::ClientGoalHandle<ActionMsg>::SharedPtr goal_return)
    {
        // 处理目标发送后的反馈
        if(!goal_return){
            RCLCPP_INFO(this->get_logger(),"The server refused the goal!");
            return;
        }
        RCLCPP_INFO(this->get_logger(),"The server accept the goal!");
        return;
    }

    void on_feedback_cb(rclcpp_action::ClientGoalHandle<ActionMsg>::SharedPtr goal_handler,
                const std::shared_ptr<const ActionMsg::Feedback> feedback)
    {
        (void)goal_handler;
        double progress = feedback->progess;
        progress *= 100;
        RCLCPP_INFO(this->get_logger(),"Current progress:%.2f%%",progress);
    }

    /* 
        std::function<void (const WrappedResult & result)>;

     */
    void on_result_cb(const rclcpp_action::ClientGoalHandle<ActionMsg>::WrappedResult & result)
    {
        if(rclcpp_action::ResultCode::SUCCEEDED == result.code)
        {
            RCLCPP_INFO(this->get_logger(),"All progression completed,The result: %ld",result.result->sum);
            return;
        }else if(rclcpp_action::ResultCode::ABORTED == result.code){
            RCLCPP_INFO(this->get_logger(),"Progression aborted!");
            return;
        }else if(rclcpp_action::ResultCode::CANCELED == result.code){
            RCLCPP_INFO(this->get_logger(),"Progression canceled!");
            return;
        }else {
            RCLCPP_INFO(this->get_logger(),"Unexecpeted error!");
            return;
        }
        
    }
    rclcpp_action::Client<ActionMsg>::SharedPtr client_;
    
};

int main(int argc, char ** argv)
{
    if(argc != 2){
        RCLCPP_ERROR(rclcpp::get_logger("main"),"Please submit an integer paramter!");
        return 1;
    }
    

    rclcpp::init(argc, argv);
    auto node = std::make_shared<ActionClient>();
    node->send_goal(atoi(argv[1]));

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
