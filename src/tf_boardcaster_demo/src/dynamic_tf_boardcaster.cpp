#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include "tf2_ros/transform_broadcaster.h"
#include "turtlesim/msg/pose.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "tf2/LinearMath/Quaternion.h"

using namespace std::chrono_literals;

class TFDynamicBroadcaster:public rclcpp::Node{
public:
    TFDynamicBroadcaster():Node("TFDynamicBroadcaster"){
        RCLCPP_INFO(this->get_logger(),"Create node of TFDynamicBroadcaster!");
        broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);
        sub = this->create_subscription<turtlesim::msg::Pose>("/turtle1/pose",10,std::bind(&TFDynamicBroadcaster::on_received_cb,this,std::placeholders::_1));
    }

private:
    void on_received_cb(const turtlesim::msg::Pose& msg)
    { 
        geometry_msgs::msg::TransformStamped ts;
        ts.header.stamp = this->now();
        ts.header.frame_id = "world";
        ts.child_frame_id = "turtle1";
        ts.transform.translation.x = msg.x;
        ts.transform.translation.y = msg.y;
        ts.transform.translation.z = 0;
        
        tf2::Quaternion qtn;
        qtn.setRPY(0,0,msg.theta);
        
        ts.transform.rotation.x = qtn.getX();
        ts.transform.rotation.y = qtn.getY();
        ts.transform.rotation.z = qtn.getZ();
        ts.transform.rotation.w = qtn.getW();

        broadcaster_->sendTransform(ts);
    }
    std::shared_ptr<tf2_ros::TransformBroadcaster> broadcaster_;
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr sub;
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TFDynamicBroadcaster>());
    rclcpp::shutdown();
    return 0;
}
