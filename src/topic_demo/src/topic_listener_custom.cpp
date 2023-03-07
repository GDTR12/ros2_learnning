#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include "plumbing_interface_demo/msg/custom_msg.hpp"

using namespace std::chrono_literals;

using plumbing_interface_demo::msg::CustomMsg;

class ListenerCustom:public rclcpp::Node{
public:
    ListenerCustom():Node("ListenerCustom"){
        RCLCPP_INFO(this->get_logger(),"Create the node of ListenerCustom!");
        _subscription =  this->create_subscription<CustomMsg>("Chatter_custom",10,std::bind(&ListenerCustom::on_received_cb,this,std::placeholders::_1));
    }
private:
    void on_received_cb(const CustomMsg& msg)
    {
        RCLCPP_INFO(this->get_logger(),"\r\n\tMsg received:\r\n\tname:%s\r\n\tdata_int:%d\r\n\tdata_float:%.2f\r\n\t",\
                                        msg.name.c_str(),msg.data_int,msg.data_float);
    }
    rclcpp::Subscription<CustomMsg>::SharedPtr _subscription;
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ListenerCustom>());
    rclcpp::shutdown();
    return 0;
}



