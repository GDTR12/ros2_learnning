from setuptools import setup
from glob import glob

package_name = 'launch_demo_py'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name, glob("launch/py/*.py")),
        ('share/' + package_name, glob("launch/xml/*.xml")),
        ('share/' + package_name, glob("launch/yaml/*.yaml"))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='gdtr',
    maintainer_email='743542724@qq.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
