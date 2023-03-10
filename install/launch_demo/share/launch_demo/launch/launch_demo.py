from launch import LaunchDescription as ld
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

from pkg_resources import declare_namespace
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch.actions import ExecuteProcess, RegisterEventHandler,LogInfo
from launch.event_handlers import OnProcessExit,OnProcessStart
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import PushROSNamespace
from launch.actions import GroupAction


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
    #------------------------执行命令、顺序执行------------------------
    # t1 = ExecuteProcess(
    #     cmd=["ros2 run turtlesim turtlesim_node --ros-args --remap __ns:=/t1"],
    #     output="both",
    #     shell=True
    # )
    # t2 = Node(package="turtlesim", executable="turtlesim_node",namespace="/t2")
    
    # rotate = ExecuteProcess(
    #     cmd=["ros2 action send_goal /t2/turtle1/rotate_absolute turtlesim/action/RotateAbsolute \"{'theta':3.14}\""],
    #     output="both", # 日志输出，即输出到文件，又输出到终端
    #     shell=True
    # )

    # pub_sub = Node(package="exercise_demo",executable="eTopic_talker")
    # rotate_exit_event = RegisterEventHandler(
    #     event_handler=OnProcessExit(
    #         target_action=rotate,
    #         on_exit=pub_sub
    #     )
    # )

    # return LaunchDescription([t1,t2,rotate,rotate_exit_event])

    #------------------------声明动态参数------------------------
    # bg_r = DeclareLaunchArgument("bg_r",default_value="255")
    # bg_g = DeclareLaunchArgument("bg_g",default_value="255")
    # bg_b = DeclareLaunchArgument("bg_b",default_value="255")
    # node = Node(
    #     package="turtlesim",
    #     executable="turtlesim_node",
    #     parameters=[{"background_r": LaunchConfiguration("bg_r"),
    #                  "background_g": LaunchConfiguration("bg_g"),
    #                  "background_b": LaunchConfiguration("bg_b")}]
    # )

    # return ld([
    #     bg_r,bg_g,bg_b,
    #     node
    # ]) 

    #------------------------导入参数------------------------
    # return ld([
    #     Node(package="turtlesim",executable="turtlesim_node",
    #         # name="ohters",
    #         # ros_arguments = ["--remap","__ns:=/t1"],
    #         # respawn=True, 
    #         # exec_name="tag1"
    #         # remappings=[("turtle1/cmd_vel","/cmd_vel")]
    #         parameters=[os.path.join(get_package_share_directory("launch_demo"),"parameters","turtlesim.yaml")])
    # ]) 

    #------------------------其他 launch 文件包含------------------------
    # include = IncludeLaunchDescription(
    #     launch_description_source=PythonLaunchDescriptionSource(
    #         launch_file_path=os.path.join(get_package_share_directory("launch_demo_py"),"launch_demo.py")
    #     ),
    #      # 这个launch_arguments指的是传递给 _launch.py 的参数，而不是节点启动 ros2 run xxx --ros-args 时的参数
    #     launch_arguments=[("background_r","80"),("background_g","80"),("background_b","80")]
    # )
    # return ld([include])

    #------------------------分组设置------------------------
    # t1 = Node(package="turtlesim",executable="turtlesim_node",name="t1")
    # t2 = Node(package="turtlesim",executable="turtlesim_node",name="t2")
    # t3 = Node(package="turtlesim",executable="turtlesim_node",name="t3")
    # g1 = GroupAction(actions=[PushROSNamespace("g1"),t1,t2])
    # g2 = GroupAction(actions=[PushROSNamespace("g2"),t3])

    # return ld([g1,g2]) 

    #------------------------添加事件------------------------
    turtle = Node(package="turtlesim",executable="turtlesim_node")
    spawn = ExecuteProcess(
        cmd=["ros2 service call /spawn turtlesim/srv/Spawn \"{'x': 8,'y':3.0}\""],
        output="both",
        shell=True
    )

    event_start = RegisterEventHandler(
        event_handler=OnProcessStart(
            target_action=turtle,
            on_start=spawn
        )
    )

    event_exit = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=turtle,
            on_exit=[LogInfo(msg="Turtlesim_node Exit")]
        )
    )
    return ld([turtle,event_start,event_exit])

