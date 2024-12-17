from setuptools import find_packages
from setuptools import setup

setup(
    name='sc_msg',
    version='0.0.0',
    packages=find_packages(
        include=('sc_msg', 'sc_msg.*')),
)
