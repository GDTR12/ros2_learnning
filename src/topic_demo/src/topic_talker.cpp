#include <cstdio>
#include <rclcpp/rclcpp.hpp>

#include <std_msgs/msg/string.hpp>

using namespace std::chrono_literals;

class Talker:public rclcpp::Node{
public:
  Talker():Node("Talker_publisher"){
    RCLCPP_INFO(this->get_logger(),"Create publish node!");
    p_publisher = this->create_publisher<std_msgs::msg::String>("Chatter",10);
    timer_ = this->create_wall_timer(1s,std::bind(&Talker::on_timer_cb,this));
  }
private:
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr p_publisher;
  rclcpp::TimerBase::SharedPtr timer_;
  size_t count = 0;
  void on_timer_cb()
  {
    auto msg = std_msgs::msg::String();
    msg.data = "Publish data:" + std::to_string(count++);
    p_publisher->publish(msg);
    RCLCPP_INFO(this->get_logger(),"Publish completed msg:%s",msg.data.c_str());
  }

};


int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Talker>());
  rclcpp::shutdown();
  return 0;
}
