from launch import LaunchDescription as ld
from launch_ros.actions import Node

def generate_launch_description():

    """        
        executable: SomeSubstitutionsType,
        package: Optional[SomeSubstitutionsType] = None,
        name: Optional[SomeSubstitutionsType] = None,
        namespace: Optional[SomeSubstitutionsType] = None,
        exec_name: Optional[SomeSubstitutionsType] = None,
        parameters: Optional[SomeParameters] = None,
        remappings: Optional[SomeRemapRules] = None,
        ros_arguments: Optional[Iterable[SomeSubstitutionsType]] = None,
        arguments: Optional[Iterable[SomeSubstitutionsType]] = None, 
    """
    return ld([
        Node(package="turtlesim",executable="turtlesim_node",
             parameters=[])
    ]) 
