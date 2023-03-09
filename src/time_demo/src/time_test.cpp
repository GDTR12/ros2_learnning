#include <cstdio>
#include <rclcpp/rclcpp.hpp>

using namespace std::chrono_literals;

class TimeNode:public rclcpp::Node{
public:
    TimeNode():Node("TimeNode"){
        RCLCPP_INFO(this->get_logger(),"Create node of TimeNode!");
        //demo_time();
        demo_duration();

    }
private:
    void demo_time()
    {
        rclcpp::Time t1(500000000L);
        rclcpp::Time t2(2,500000000L);
        rclcpp::Time right_now = this->now();
        rclcpp::Time right_now2 = this->get_clock()->now();
        RCLCPP_INFO(this->get_logger(),"(s = %.2f, ns = %ld)",t1.seconds(),t1.nanoseconds());
        RCLCPP_INFO(this->get_logger(),"(s = %.2f, ns = %ld)",t2.seconds(),t2.nanoseconds());
        RCLCPP_INFO(this->get_logger(),"(s = %.2f, ns = %ld)",right_now.seconds(),right_now.nanoseconds());
        RCLCPP_INFO(this->get_logger(),"(s = %.2f, ns = %ld)",right_now2.seconds(),right_now2.nanoseconds());
    
    }

    void demo_duration()
    {
        rclcpp::Duration du1(1s);
        rclcpp::Duration du2(2,2000000);

        RCLCPP_INFO(this->get_logger(),"(s = %.2f, ns = %ld)",du1.seconds(),du1.nanoseconds());
        RCLCPP_INFO(this->get_logger(),"(s = %.2f, ns = %ld)",du2.seconds(),du2.nanoseconds());    
    }

};

int main(int argc, char ** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<TimeNode>());
    rclcpp::shutdown();
    return 0;
}
