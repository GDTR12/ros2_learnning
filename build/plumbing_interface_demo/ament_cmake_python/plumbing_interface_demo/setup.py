from setuptools import find_packages
from setuptools import setup

setup(
    name='plumbing_interface_demo',
    version='0.0.0',
    packages=find_packages(
        include=('plumbing_interface_demo', 'plumbing_interface_demo.*')),
)
