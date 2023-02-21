from setuptools import setup

package_name = 'my_python_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='wward',
    maintainer_email='wward@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "py_node = my_python_pkg.my_first_node:main",
            "robot_news_station = my_python_pkg.robot_news_station:main",
            "smartphone = my_python_pkg.smartphone:main",
            "number_publisher = my_python_pkg.number_publisher:main",
            "add_two_ints_server = my_python_pkg.add_two_ints_server:main",
            "add_two_ints_client_no_oop = my_python_pkg.add_two_ints_client_no_oop:main",
            "add_two_ints_client = my_python_pkg.add_two_ints_client:main",
            "hw_status_publisher = my_python_pkg.hw_status_publisher:main",
            "battery = my_python_pkg.battery:main",
            "led_panel = my_python_pkg.led_panel:main"
        ],
    },
)
