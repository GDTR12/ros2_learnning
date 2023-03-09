#include <cstdio>
#include <rclcpp/rclcpp.hpp>

using namespace std::chrono_literals;

class MultiNode:public rclcpp::Node{
public:
    MultiNode(const std::string& name):Node(name){
        RCLCPP_INFO(this->get_logger(),"Create node of %s",name.c_str());
    }
private:
    
};
int _argc;
char **_argv;
void* create_node(void* name)
{
    rclcpp::init(_argc,_argv);
    rclcpp::spin(std::make_shared<MultiNode>(*(std::string*)name));
    rclcpp::shutdown();
    pthread_exit(NULL);
}

#include <pthread.h>
int main(int argc, char ** argv)
{
    pthread_t thread1;
    pthread_t thread2;
    _argc = argc;
    _argv = argv;
    std::string s1("node1");
    std::string s2("node2");
    pthread_create(&thread1,NULL,create_node,(void*)&s1);
    // pthread_create(&thread2,NULL,create_node,(void*)&s2);
    pthread_exit(NULL);
    return 0;
}
