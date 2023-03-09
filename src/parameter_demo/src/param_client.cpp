/*
    需求：编写参数客户端，获取或修改服务端参数。
    步骤：
        1.包含头文件；
        2.初始化 ROS2 客户端；
        3.定义节点类；
            3-1.查询参数；
            3-2.修改参数；
        4.创建节点对象指针，调用参数操作函数；
        5.释放资源。
*/

#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include <iostream>
using namespace std::chrono_literals;

class ParamClient:public rclcpp::Node{
public:
    ParamClient():Node("ParamClient"){
        RCLCPP_INFO(this->get_logger(),"Create node of ParamClient!");
        client_ = std::make_shared<rclcpp::SyncParametersClient>(this,"ParamServer");
    }

    bool connect_server()
    {
        while(!client_->wait_for_service(1s))
        {
            if(rclcpp::ok())
            {
                return false;
            }
            RCLCPP_INFO(this->get_logger(),"Connecting server...");
        }
        return true;
    }
    
    void get_parameters_(const std::vector<std::string> &names)
    {
        // this->get_parameter("name");
        // this->has_parameter("name");
        auto params = client_->get_parameters(names);
        // auto param0 = client_->get_parameter<double>("height");
        
        RCLCPP_INFO(this->get_logger(),"Getting parameter from server!");
        for (auto &&param : params)
        {
            RCLCPP_INFO(this->get_logger(),"(%s : %s)",param.get_name().c_str(),param.value_to_string().c_str());
        }
    }

    void update_parameter(const std::string &name,
        const rclcpp::ParameterValue & value)
    {
        // client_->set_parameter(rclcpp::Parameter(name,value));
        client_->set_parameters({rclcpp::Parameter(name,value)});
        if(client_->has_parameter(name))
        {
            const std::vector<std::string> names = {name};
            auto params = client_->get_parameters(names);
            auto param = params.front();
            RCLCPP_INFO(this->get_logger(),"Update parameter to server!");
            RCLCPP_INFO(this->get_logger(),"(%s : %s)",param.get_name().c_str(),param.value_to_string().c_str());
        }

    }

private:
    rclcpp::SyncParametersClient::SharedPtr client_;
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    auto client = std::make_shared<ParamClient>();
    if(!client->connect_server())
    {
        return 1;
    }
    std::string mark(50,'=');
    std::cout<<mark<<std::endl;
    client->get_parameters_({"name","age","height","gender"});

    client->update_parameter("beautiful?",rclcpp::ParameterValue("yes"));

    std::cout<<mark<<std::endl;
    client->get_parameters_({"name","age","height","gender","beautiful?"});

    rclcpp::spin(client);
    rclcpp::shutdown();
    return 0;
}
