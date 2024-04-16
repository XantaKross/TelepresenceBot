from setuptools import find_packages, setup
from os import listdir
from os.path import expanduser

user_home = expanduser("~") # Assuming user's home directory always contains tBot project.
project_space = user_home + "/tBot/botSpace/src/"


package_name = 'tbmain'


local = project_space + package_name

urdf_files = [f"description/{i}" for i in listdir(local + "/description")]
launch_files = [f"launch/{i}" for i in listdir(local + "/launch")]
config_files = [f"config/{i}" for i in listdir(local + "/config")]

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),

        # Automatically create all description files and launch files.
        ('share/' + package_name, ['package.xml',] + launch_files + urdf_files + config_files),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='xanta',
    maintainer_email='xanta@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
