#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include <plumbing_interface_demo/srv/service_exercise.hpp>


using plumbing_interface_demo::srv::ServiceExercise;
using namespace std::chrono_literals;


class EServiceClient:public rclcpp::Node{
public:
    EServiceClient():Node("EServiceClient"){
        RCLCPP_INFO(this->get_logger(),"Create node of EServiceClient!");
        client = this->create_client<ServiceExercise>("Distance");
    }

    bool connect_server()
    {
        while(!client->wait_for_service(1s));
        {
            RCLCPP_INFO(rclcpp::get_logger("EServiceCLient"), "Connecting server....");
            if(!rclcpp::ok()){
                RCLCPP_INFO(rclcpp::get_logger("EServiceCLient"),"Progress unexpected aborted!");
                return false;
            }
        }
        
        return true;
    }

    rclcpp::Client<ServiceExercise>::FutureAndRequestId send_goal(float x, float y,float theta)
    {
        auto request = std::make_shared<plumbing_interface_demo::srv::ServiceExercise_Request>();
        request->x = x;
        request->y = y;
        request->theta = theta;
        auto future = client->async_send_request(request);
        return future;
    }
private:
    rclcpp::Client<ServiceExercise>::SharedPtr client;






};

int main(int argc, char ** argv)
{
    if(argc != 5){
        RCLCPP_ERROR(rclcpp::get_logger("main"),"Wrong format of arguments!");
        return 1;
    }
    float goal_x = atof(argv[1]);
    float goal_y = atof(argv[2]);
    float goal_theta = atof(argv[3]);

    rclcpp::init(argc, argv);

    auto client = std::make_shared<EServiceClient>();
    if(!client->connect_server())
    {
        RCLCPP_INFO(rclcpp::get_logger("main"),"Connect failed");
        return 1;
    }
    auto future = client->send_goal(goal_x,goal_y,goal_theta);
    if(rclcpp::spin_until_future_complete(client,future) == rclcpp::FutureReturnCode::SUCCESS)
    {
        RCLCPP_INFO(rclcpp::get_logger("main"), "Send goal successful!");
        RCLCPP_INFO(rclcpp::get_logger("main"), "Distance:%.2f",future.get()->distance);
    }else{
        RCLCPP_ERROR(rclcpp::get_logger("main"), "Send goal failed!");
        return 1;
    }

    rclcpp::shutdown();
    return 0;
}
