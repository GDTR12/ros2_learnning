from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess, RegisterEventHandler
from launch.event_handlers import OnProcessExit

def generate_launch_description():
    t1 = ExecuteProcess(
        cmd=["ros2 run turtlesim turtlesim_node --ros-args --remap __ns:=/t1"],
        output="both",
        shell=True
    )
    t2 = Node(package="turtlesim", executable="turtlesim_node",namespace="/t2")
    
    rotate = ExecuteProcess(
        cmd=["ros2 action send_goal /t2/turtle1/rotate_absolute turtlesim/action/RotateAbsolute \"{'theta':3.14}\""],
        output="both", # 日志输出，即输出到文件，又输出到终端
        shell=True
    )

    pub_sub = Node(package="exercise_demo",executable="eTopic_talker")
    rotate_exit_event = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=rotate,
            on_exit=pub_sub
        )
    )

    return LaunchDescription([t1,t2,rotate,rotate_exit_event])


