#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include "tf2_ros/static_transform_broadcaster.h"
#include "tf2/LinearMath/Quaternion.h"


using namespace std::chrono_literals;

class TFStaticBoardcaster:public rclcpp::Node{
public:
    TFStaticBoardcaster():Node("TFStaticBoardcaster"){
        RCLCPP_INFO(this->get_logger(),"Create node of TFStaticBoardcaster!");
        boardcaster = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);
    }
    void pub_static_tf(char* argv[])
    {
        geometry_msgs::msg::TransformStamped transform;
        transform.header.stamp = this->now();
        transform.header.frame_id = argv[7];
        transform.child_frame_id = argv[8];
        transform.transform.translation.x = atof(argv[1]);
        transform.transform.translation.y = atof(argv[2]);
        transform.transform.translation.z = atof(argv[3]);
        /* 将欧拉角转换成四元数 */
        tf2::Quaternion qtn;
        qtn.setRPY(atof(argv[4]),atof(argv[5]),atof(argv[6]));
        transform.transform.rotation.x = qtn.getX();
        transform.transform.rotation.y = qtn.getY();
        transform.transform.rotation.z = qtn.getZ();
        transform.transform.rotation.w = qtn.getW();
        boardcaster->sendTransform(transform);
    }
private:

    std::shared_ptr<tf2_ros::StaticTransformBroadcaster> boardcaster;

};

int main(int argc, char ** argv)
{
    if (argc != 9)
    {
        RCLCPP_ERROR(rclcpp::get_logger("main"),"Invalid data format");
        return -1;
    }
    rclcpp::init(argc, argv);
    auto caster = std::make_shared<TFStaticBoardcaster>();
    caster->pub_static_tf(argv);
    rclcpp::spin(caster);
    rclcpp::shutdown();
    return 0;
}
