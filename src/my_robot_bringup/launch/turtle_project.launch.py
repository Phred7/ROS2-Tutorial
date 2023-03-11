from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    turtle_node = Node(
        package="turtlesim",
        executable="turtlesim_node",
        name="turtle"
    )

    turtle_controller = Node(
        package="my_python_pkg",
        executable="turtle_controller",
        name="turtle_controller"
    )

    turtle_spawner = Node(
        package="my_python_pkg",
        executable="turtle_spawner",
        name="turtle_spawner"
    )

    ld.add_action(turtle_node)
    ld.add_action(turtle_controller)
    ld.add_action(turtle_spawner)

    return ld