#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include "plumbing_interface_demo/msg/custom_msg.hpp"

using namespace std::chrono_literals;
using plumbing_interface_demo::msg::CustomMsg;

class TalkerCustom:public rclcpp::Node{
public:
    TalkerCustom():Node("TalkerCustom"){
        RCLCPP_INFO(this->get_logger(),"Create node of TalkerCustom!");
        _publisher = this->create_publisher<CustomMsg>("Chatter_custom", 10);
        _timer = this->create_timer(1s,std::bind(&TalkerCustom::on_timer_cb,this));
    }
private:
    void on_timer_cb()
    {
        CustomMsg msg;
        msg.name = "custom data";
        msg.data_int = count ++;
        msg.data_float = count/2.0;
        _publisher->publish(msg);
        RCLCPP_INFO(this->get_logger(),"Data sent times: %ld!",count);
    }
    rclcpp::Publisher<CustomMsg>::SharedPtr _publisher;
    rclcpp::TimerBase::SharedPtr _timer;
    size_t count = 0;
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TalkerCustom>());
    rclcpp::shutdown();
    return 0;
}


