#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include "geometry_msgs/msg/twist.hpp"
#include "rosbag2_cpp/writer.hpp"


/* 
    录制话题
        1.创建录制对象
        2.设置对象关联文件
        3.创建订阅方
        4.写数据
 */

using namespace std::chrono_literals;

class RosbagWriteDemo:public rclcpp::Node{
public:
    RosbagWriteDemo():Node("RosbagWriteDemo"){
        RCLCPP_INFO(this->get_logger(),"Create node of RosbagWriteDemo!");
        writer_ = std::make_unique<rosbag2_cpp::Writer>();
        std::string name;
        name = "src/rosbag2_demo/bag";
        writer_->open(name);
        sub = this->create_subscription<geometry_msgs::msg::Twist>("/turtle1/cmd_vel",10,std::bind(&RosbagWriteDemo::on_received_cb,this,std::placeholders::_1));
    }

private:
    void on_received_cb(std::shared_ptr<rclcpp::SerializedMessage> msg)
    {
        writer_->write(msg,"/turtle1/cmd_vel","geometry_msgs/msg/Twist",this->now());
        RCLCPP_INFO(this->get_logger(),"data has been writen");
    }
    std::unique_ptr<rosbag2_cpp::Writer> writer_;
    rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr sub;
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<RosbagWriteDemo>());
    rclcpp::shutdown();
    return 0;
}
