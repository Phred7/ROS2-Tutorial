from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    ld = LaunchDescription()

    robot_news_station_node_0 = Node(
        package="my_python_pkg",
        executable="robot_news_station",
        name="robot_news_station_glskard"
    )

    robot_news_station_node_1 = Node(
        package="my_python_pkg",
        executable="robot_news_station",
        name="robot_news_station_bb8"
    )

    robot_news_station_node_2 = Node(
        package="my_python_pkg",
        executable="robot_news_station",
        name="robot_news_station_daneel"
    )

    robot_news_station_node_3 = Node(
        package="my_python_pkg",
        executable="robot_news_station",
        name="robot_news_station_lander"
    )

    robot_news_station_node_4 = Node(
        package="my_python_pkg",
        executable="robot_news_station",
        name="robot_news_station_c3p0"
    )

    smartphone_node = Node(
        package="my_python_pkg",
        executable="smartphone"
    )

    ld.add_action(robot_news_station_node_0)
    ld.add_action(robot_news_station_node_1)
    ld.add_action(robot_news_station_node_2)
    ld.add_action(robot_news_station_node_3)
    ld.add_action(robot_news_station_node_4)
    ld.add_action(smartphone_node)

    return ld