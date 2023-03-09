from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess, RegisterEventHandler
from launch.event_handlers import OnProcessExit

def generate_launch_description():
    x = 6
    y = 9
    theta = 0.0
    name = "t2"
    generate_new = ExecuteProcess(
        cmd=["ros2 service call /spawn turtlesim/srv/Spawn \"{'x':" + str(x) + ",'y':" + str(y)+",'theta':" + str(theta) + ",'name':'" + name + "'}\""],
        output="both",
        shell=True
    )
    client = Node(package="exercise_demo",executable="eServiceClient",
                  arguments=[str(x),str(y),str(theta)])
    # 相当于 ros2 run exercise_demo eServiceClient 6 9 0.0 --ros-args       :（共四个参数）
    return LaunchDescription([generate_new,client]) 