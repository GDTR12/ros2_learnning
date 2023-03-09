/*
    需求：编写参数服务端，设置并操作参数。
    步骤：
        1.包含头文件；
        2.初始化 ROS2 客户端；
        3.定义节点类；
            3-1.声明参数；
            3-2.查询参数；
            3-3.修改参数；
            3-4.删除参数。
        4.创建节点对象指针，调用参数操作函数，并传递给spin函数；
        5.释放资源。

*/


#include <cstdio>
#include <rclcpp/rclcpp.hpp>

using namespace std::chrono_literals;

class ParamServer:public rclcpp::Node{
public:
    /* 如果运行参数可以删除，需要在节点创建的时候就声明参数可以删除。 */

    /* 
        为什么参数服务通信不需要创建服务端：
            参数服务端启动后，底层封装了多个服务通信的服务端
            每个服务端的话题名称：/参数服务节点名称/XXX
            参数客户端启动后，也会封装多个服务通信的客户端
            每个客户端也需要使用这些话题
     */
    ParamServer():Node("ParamServer",rclcpp::NodeOptions().allow_undeclared_parameters(true)){
        RCLCPP_INFO(this->get_logger(),"Create node of ParamServer!");
    }

    void add_parameter(
        const std::string &name,
        const rclcpp::ParameterValue & value)
    {
        this->declare_parameter(name,value);
        RCLCPP_INFO(this->get_logger(),"Adding parameter to server!");
    }


    void get_parameters_(const std::vector<std::string> &names)
    {
        // this->get_parameter("name");
        // this->has_parameter("name");
        auto params = this->get_parameters(names);
        RCLCPP_INFO(this->get_logger(),"Getting parameter from server!");
        for (auto &&param : params)
        {
            RCLCPP_INFO(this->get_logger(),"(%s : %s)",param.get_name().c_str(),param.value_to_string().c_str());
        }
    }

    void update_parameter(const std::string &name,
        const rclcpp::ParameterValue & value)
    {
        this->set_parameter(rclcpp::Parameter(name,value));
        if(this->has_parameter(name))
        {
            auto param = this->get_parameter(name);
            RCLCPP_INFO(this->get_logger(),"Update parameter to server!");
            RCLCPP_INFO(this->get_logger(),"(%s : %s)",param.get_name().c_str(),param.value_to_string().c_str());
        }

    }
    
    void del_parameter(const std::string &name)
    {
        RCLCPP_INFO(this->get_logger(),"Delete parameter from server!");
        this->undeclare_parameter(name);
    }


private:
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ParamServer>();
    node->add_parameter("name",rclcpp::ParameterValue("HolloKitty"));
    node->add_parameter("age",rclcpp::ParameterValue(18));
    node->add_parameter("height",rclcpp::ParameterValue(1.8));

    node->get_parameters_({"name","age","height"});

    node->update_parameter("height",rclcpp::ParameterValue(1.65));
    /* 新增参数，属于 set_parameter() 这种参数可以通过 undeclare_parameter 删除 */
    node->update_parameter("gender",rclcpp::ParameterValue("women"));
    /* 删除参数 */
    // node->del_parameter("name"); //会抛异常，这是declare_parameter得到的参数
    // node->del_parameter("gender"); //不会抛异常，这是 set_parameter得到的参数


    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
