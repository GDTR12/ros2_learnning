#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include <turtlesim/msg/pose.hpp>
#include <geometry_msgs/msg/twist.hpp>

using namespace std::chrono_literals;
using turtlesim::msg::Pose;
using geometry_msgs::msg::Twist;

class ImagePublishTalk:public rclcpp::Node{
public:
    ImagePublishTalk():Node("ImagePublishTalk"){
        RCLCPP_INFO(this->get_logger(),"Create node of ImagePublishTalk!");
        publisher = this->create_publisher<Twist>("/t1/turtle1/cmd_vel",10);
        subscriber = this->create_subscription<Pose>("/t2/turtle1/pose",10,std::bind(&ImagePublishTalk::on_received_cb,this,std::placeholders::_1));
    }
private:
    rclcpp::Subscription<Pose>::SharedPtr subscriber;
    rclcpp::Publisher<Twist>::SharedPtr publisher;
    void on_received_cb(const Pose& msg){
        auto twist = Twist();
        twist.angular.z = -msg.angular_velocity;
        twist.linear.x = msg.linear_velocity;
        publisher->publish<Twist>(twist);
    }
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ImagePublishTalk>());
    rclcpp::shutdown();
    return 0;
}
