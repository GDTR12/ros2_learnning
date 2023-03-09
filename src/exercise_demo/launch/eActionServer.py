from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess, RegisterEventHandler
from launch.event_handlers import OnProcessExit

def generate_launch_description():
    
    t = Node(package="turtlesim", executable="turtlesim_node")
    server = Node(package="exercise_demo",executable="eActionServer")
    return LaunchDescription([t,server])