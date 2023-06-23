#include <cstdio>
#include <rclcpp/rclcpp.hpp>

using namespace std::chrono_literals;

class ParamBind:public rclcpp::Node{
public:
    ParamBind():Node("ParamBind"){
        RCLCPP_INFO(this->get_logger(),"Create node of ParamBind!");
    }

template<typename TypeT>
TypeT&& pb_declare(
    const std::string &name, 
    const rclcpp::ParameterValue & value
)
{
    TypeT data;
    /* const std::string &name, const rcl_interfaces::msg::ParameterDescriptor &parameter_descriptor = rcl_interfaces::msg::ParameterDescriptor(), bool ignore_override = false */
    this->declare_parameter(name,value);
    
    return std::move<TypeT>(data);
}

private:
    
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ParamBind>());
    rclcpp::shutdown();
    return 0;
}
