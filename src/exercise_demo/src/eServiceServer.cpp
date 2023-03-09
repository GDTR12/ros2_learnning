#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include "plumbing_interface_demo/srv/service_exercise.hpp"
#include "turtlesim/msg/pose.hpp"

using namespace std::chrono_literals;
using plumbing_interface_demo::srv::ServiceExercise;
using turtlesim::msg::Pose;

class EServiceServer:public rclcpp::Node{
public:
    EServiceServer():Node("EServiceServer"){
        RCLCPP_INFO(this->get_logger(),"Create node of EServiceServer!");
        sub = this->create_subscription<Pose>("/turtle1/pose",10,std::bind(&EServiceServer::pose_cb,this,std::placeholders::_1));
        ser = this->create_service<ServiceExercise>("Distance",std::bind(&EServiceServer::on_request_cb,this,std::placeholders::_1,std::placeholders::_2));
    }
private:
    rclcpp::Subscription<Pose>::SharedPtr sub;
    rclcpp::Service<ServiceExercise>::SharedPtr ser;
    float x,y;

    void pose_cb(Pose::SharedPtr pose)
    {
        x = pose->x;
        y = pose->y;
    }

    void on_request_cb(const ServiceExercise::Request::SharedPtr req, const ServiceExercise::Response::SharedPtr res)
    {
        float dis_x = req->x - x;
        float dis_y = req->y - y;
        res->set__distance(std::sqrt(std::pow(dis_x,2) + std::pow(dis_y,2)));
        RCLCPP_INFO(this->get_logger(),"Goal's coord:(%.2f,%.2f),Source tur coord:(%.2f,%.2f), distance:%.2f",
                req->x,req->y,x,y,res->distance);
    }


};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<EServiceServer>());
    rclcpp::shutdown();
    return 0;
}
