#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include "geometry_msgs/msg/point_stamped.hpp"
using namespace std::chrono_literals;

class PointBroad:public rclcpp::Node{
using PointMsg = geometry_msgs::msg::PointStamped;

public:
    PointBroad():Node("PointBroad"){
        RCLCPP_INFO(this->get_logger(),"Create node of PointBroad!");
        p_pub = this->create_publisher<PointMsg>("point",10);
        _timer = this->create_timer(1s,std::bind(&PointBroad::on_timer_cb,this));

    }
private:
    rclcpp::Publisher<PointMsg>::SharedPtr p_pub;
    rclcpp::TimerBase::SharedPtr _timer;
    double x = 0;
    void on_timer_cb(){
        PointMsg msg;
        msg.header.frame_id = "laser";
        msg.header.stamp = this->now();
        x += 0.05;
        msg.point.x = x;
        msg.point.y = 0;
        msg.point.z = -0.1;
        p_pub->publish(msg);
    }
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PointBroad>());
    rclcpp::shutdown();
    return 0;
}


