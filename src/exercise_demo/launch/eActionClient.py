from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess, RegisterEventHandler
from launch.event_handlers import OnProcessExit

def generate_launch_description():
    
    x = 8.54
    y = 9.54
    theta = 90.0
    name = "t3"
    spawn = ExecuteProcess(
        cmd=["ros2 service call /spawn turtlesim/srv/Spawn \"{'x': "
                + str(x) + ",'y': " + str(y) + ",'theta': " + str(theta) + ",'name': '" + name + "'}\""],
        # output="both",
        shell=True    )
    client = Node(package="exercise_demo",
                executable="eActionClient",
                arguments=[str(x),str(y),str(theta)])
    return LaunchDescription([spawn,client])