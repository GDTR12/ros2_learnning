#include <cstdio>
#include <rclcpp/rclcpp.hpp>


/* 
int main(int argc, char ** argv)
{
    rclcpp::init(argc,argv);
	// 创建节点指针
	auto node = rclcpp::Node::make_shared("hello_world_node");

	RCLCPP_INFO(node->get_logger(),"Hello world? 中文乱码吗？");

	rclcpp::shutdown();
	return 0;
}

 */



class MyNode:public rclcpp::Node{
public:
	MyNode():Node("hello_world"){
		RCLCPP_INFO(this->get_logger(),"My node struct function");
	}
};

int main(int argc,char const *argv[])
{
	/* 
		初始化作用：
			1、内存初始化
			2、Context初始化
			
	 */
    rclcpp::init(argc,argv);
	auto node = std::make_shared<MyNode>();
	rclcpp::shutdown();
	return 0;
}

