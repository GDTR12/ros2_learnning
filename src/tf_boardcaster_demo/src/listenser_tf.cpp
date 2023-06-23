
/* 
 * 需求：
 *      先发布laser到base_link的坐标先对关系，在发布，camera到base_link的坐标关系
 * 流程：
 *      创建缓存对象,融合多个坐标关系到一个坐标树
 *      创建监听器，绑定缓存对象，会将多个广播器的数据写入缓存
 *      编写一个定时器，循环转换
 * 
 */
#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include "tf2_ros/buffer.h"
#include "tf2_ros/transform_listener.h"

using namespace std::chrono_literals;

class TFListener:public rclcpp::Node{
public:
    TFListener():Node("TFListener"){
        RCLCPP_INFO(this->get_logger(),"Create node of TFListener!");
        _buffer = std::make_unique<tf2_ros::Buffer>(this->get_clock());
        _listener = std::make_shared<tf2_ros::TransformListener>(*_buffer,this);
        _timer = this->create_wall_timer(1s,std::bind(&TFListener::on_timer_cb,this));

    }
private:
    std::unique_ptr<tf2_ros::Buffer> _buffer;
    std::shared_ptr<tf2_ros::TransformListener> _listener;
    rclcpp::TimerBase::SharedPtr _timer;

    void on_timer_cb(){
        // try
        // {
        //     auto ts = _buffer->lookupTransform("camera","laser",tf2::TimePointZero);
        //     RCLCPP_INFO(this->get_logger(),"transform successful");
        //     RCLCPP_INFO(this->get_logger(),"parent coord:%s child coord:%s offset:(%.2f,%.2f,%.2f)",
        //                 ts.header.frame_id.c_str(),
        //                 ts.child_frame_id.c_str(),
        //                 ts.transform.translation.x,
        //                 ts.transform.translation.y,
        //                 ts.transform.translation.z);
        // }
        // catch(const tf2::LookupException& e)
        // {
        //     RCLCPP_INFO(this->get_logger(),"tf2::LookupException:%s",e.what());
        // }
        if(_buffer->canTransform("camera","laser",tf2::TimePointZero))
        {
            auto ts = _buffer->lookupTransform("camera","laser",tf2::TimePointZero);
            RCLCPP_INFO(this->get_logger(),"transform successful");
            RCLCPP_INFO(this->get_logger(),"parent coord:%s child coord:%s offset:(%.2f,%.2f,%.2f)",
                        ts.header.frame_id.c_str(),
                        ts.child_frame_id.c_str(),
                        ts.transform.translation.x,
                        ts.transform.translation.y,
                        ts.transform.translation.z);

        }
        
        
    }
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TFListener>());
    rclcpp::shutdown();
    return 0;
}
