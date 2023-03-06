#include <cstdio>
#include <rclcpp/rclcpp.hpp>

#include <std_msgs/msg/string.hpp>

class Listener:public rclcpp::Node{
public:
    Listener():Node("Topic_listener"){
        RCLCPP_INFO(this->get_logger(),"Create Listener!");
        subscriptioner_ = this->create_subscription<std_msgs::msg::String>("Chatter",10,std::bind(&Listener::on_listenser_cb,this,std::placeholders::_1));
    }
private:
    void on_listenser_cb(const std_msgs::msg::String &msg)
    {
        RCLCPP_INFO(this->get_logger(),"Received msgs: %s",msg.data.c_str());
    }
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscriptioner_;
};


int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Listener>());
  rclcpp::shutdown();
  return 0;
}




