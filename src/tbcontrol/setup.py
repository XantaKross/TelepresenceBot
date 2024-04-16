from setuptools import find_packages, setup

package_name = 'tbcontrol'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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

            'rmcontrol = tbcontrol.rmcontrol:main',
            # EDITED.
            'service = tbcontrol.controlServer:main',
            'client  = tbcontrol.controlClient:main',
            # END EDITED.
        ],
    },
)
