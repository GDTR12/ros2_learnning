/*
    需求：编写参数服务端，设置并操作参数。
    步骤：
        1.包含头文件；
        2.初始化 ROS2 客户端；
        3.定义节点类；
            3-1.创建参数对象
            3-2.查询参数；
            3-3.修改参数；
            3-4.删除参数。
        4.创建节点对象指针，调用参数操作函数，并传递给spin函数；
        5.释放资源。

*/

#include <cstdio>
#include <rclcpp/rclcpp.hpp>

using namespace std::chrono_literals;

class MyParamter:public rclcpp::Node{
public:
    MyParamter():Node("MyParamter"){
        RCLCPP_INFO(this->get_logger(),"Create node of MyParamter!");
        rclcpp::Parameter p1("param1","tiger");
        rclcpp::Parameter p2("param2",1.68);
        rclcpp::Parameter p3("param3",4);
        RCLCPP_INFO(this->get_logger(),"param1:{key:%s\tvalue:%s}",p1.get_name().c_str(),p1.as_string().c_str());
        RCLCPP_INFO(this->get_logger(),"param2:{key:%s\tvalue:%.2f}",p2.get_name().c_str(),p2.as_double());
        RCLCPP_INFO(this->get_logger(),"param3:{key:%s\tvalue:%ld}",p3.get_name().c_str(),p3.as_int());
    }
private:
    
};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MyParamter>());
    rclcpp::shutdown();
    return 0;
}
