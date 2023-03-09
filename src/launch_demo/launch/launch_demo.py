from launch import LaunchDescription as ld
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os
def generate_launch_description():

    """        
        executable: SomeSubstitutionsType,
        package: Optional[SomeSubstitutionsType] = None,
        name: Optional[SomeSubstitutionsType] = None,
        namespace: Optional[SomeSubstitutionsType] = None,
        exec_name: 标签
        parameters: Optional[SomeParameters] = None,
        remappings: Optional[SomeRemapRules] = None,
        ros_arguments: Optional[Iterable[SomeSubstitutionsType]] = None,
        arguments: Optional[Iterable[SomeSubstitutionsType]] = None, 
    """
    return ld([
        Node(package="turtlesim",executable="turtlesim_node",
            # name="ohters",
            # ros_arguments = ["--remap","__ns:=/t1"],
            # respawn=True, 
            # exec_name="tag1"
            # remappings=[("turtle1/cmd_vel","/cmd_vel")]
            parameters=[os.path.join(get_package_share_directory("launch_demo"),"parameters","turtlesim.yaml")])
    ]) 
