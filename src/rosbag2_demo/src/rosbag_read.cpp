#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include "rosbag2_cpp/reader.hpp"
#include "geometry_msgs/msg/twist.hpp"

using namespace std::chrono_literals;
using geometry_msgs::msg::Twist;
class RosbagReadDemo:public rclcpp::Node{
public:
    RosbagReadDemo():Node("RosbagReadDemo"){
        RCLCPP_INFO(this->get_logger(),"Create node of RosbagReadDemo!");
        reader_ = std::make_unique<rosbag2_cpp::Reader>();
        reader_->open("src/rosbag2_demo/bag");
        while(reader_->has_next())
        {
            auto twist = reader_->read_next<Twist>();
            RCLCPP_INFO(this->get_logger(),"linear speed:%.2f,angular speed:%.2f",twist.linear.x,twist.angular.z);
        }
        reader_->close();
    }
private:
    std::unique_ptr<rosbag2_cpp::Reader> reader_;
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<RosbagReadDemo>());
    rclcpp::shutdown();
    return 0;
}
