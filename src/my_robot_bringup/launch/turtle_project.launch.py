from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    turtle_node = Node(
        package="turtlesim",
        executable="turtlesim_node",
        name="turtle"
    )

    ld.add_action(turtle_node)

    return ld