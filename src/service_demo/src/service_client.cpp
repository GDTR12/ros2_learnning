#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include "plumbing_interface_demo/srv/service_msg.hpp"

using namespace std::chrono_literals;
using plumbing_interface_demo::srv::ServiceMsg;

class ServiceClient:public rclcpp::Node{
public:
    ServiceClient():Node("ServiceClient"){
        RCLCPP_INFO(this->get_logger(),"Create node of ServiceClient!");
        _client = this->create_client<ServiceMsg>("ServiceNode");

    }
    /* 连接服务器 */
    /* 
        这里需要注意的是：在容易出现异常的情况下（比如这里容易出现Ctrl+C中断），程序异常退出会释放掉rclcpp::init()申请的内存
        所以这里如若使用this->get_logger()会出现 context报错，不建议这里使用this->get_logger(),
        而是使用独立于rclcpp::init()申请内存之外的 rclcpp::get_logger()
     */
    bool connect_server()
    {
        size_t try_times = 1;
        while(!_client->wait_for_service(10ms)){
            try_times++;
            /* 对键盘中断Ctrl+C进行判断 */
            if(!rclcpp::ok())
            {
                RCLCPP_INFO(rclcpp::get_logger("ServiceClient"),"Keyboard interuption!");
                return false;
            }
            if(try_times >= 1000)return false; 
        }
        RCLCPP_INFO(rclcpp::get_logger("ServiceClient"),"Successfully connected, try time:%.2ld s",try_times*10/1000);
        return true;
    }
    rclcpp::Client<ServiceMsg>::FutureAndRequestId send_request(int num1,int num2)
    {
        auto req = std::make_shared<ServiceMsg::Request>();
        req->data1 = num1;
        req->data2 = num2;
        return _client->async_send_request(req);
    }
private:

    rclcpp::Client<ServiceMsg>::SharedPtr _client;
};

int main(int argc, char ** argv)
{
    if(argc != 3)
    {
        RCLCPP_ERROR(rclcpp::get_logger("main"),"Please submit two interg number!!!");
        return 1;
    }

    rclcpp::init(argc, argv);
    auto client = std::make_shared<ServiceClient>();
    bool flag = client->connect_server();
    
    if(!flag){
        RCLCPP_INFO(rclcpp::get_logger("main"),"Connect status:failed!");
        return 1;
    }
    auto future = client->send_request(atoi(argv[1]),atoi(argv[2]));

    if(rclcpp::spin_until_future_complete(client,future) == rclcpp::FutureReturnCode::SUCCESS){
        RCLCPP_INFO(client->get_logger(),"Response successful: sum = %d",future.get()->sum);

    }else{
        RCLCPP_INFO(client->get_logger(),"Response failed!");
    }
    
    rclcpp::shutdown();
    return 0;
}
