#include <cstdio>
#include <rclcpp/rclcpp.hpp>

using namespace std::chrono_literals;

class EActionClient:public rclcpp::Node{
public:
    EActionClient():Node("EActionClient"){
        RCLCPP_INFO(this->get_logger(),"Create node of EActionClient!");
    }
private:
    
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<EActionClient>());
    rclcpp::shutdown();
    return 0;
}
