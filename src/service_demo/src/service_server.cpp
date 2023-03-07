#include <cstdio>
#include <rclcpp/rclcpp.hpp>

#include "plumbing_interface_demo/srv/service_msg.hpp"

using namespace std::chrono_literals;
using plumbing_interface_demo::srv::ServiceMsg;
using std::placeholders::_1;
using std::placeholders::_2;

class ServiceServer:public rclcpp::Node{
public:
    ServiceServer():Node("ServiceServer"){
        RCLCPP_INFO(this->get_logger(),"Create node of ServiceServer!");
        _server = this->create_service<ServiceMsg>("ServiceNode",std::bind(&ServiceServer::on_request_cb,this,_1,_2));
        
    }
private:
    void on_request_cb(const ServiceMsg::Request::SharedPtr req, const ServiceMsg::Response::SharedPtr res)
    {
        res->sum = req->data1 + req->data2;
        RCLCPP_INFO(this->get_logger(), "%d + %d = %d",req->data1,req->data2,res->sum);
    }
    rclcpp::Service<ServiceMsg>::SharedPtr _server;
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ServiceServer>());
    rclcpp::shutdown();
    return 0;
}
