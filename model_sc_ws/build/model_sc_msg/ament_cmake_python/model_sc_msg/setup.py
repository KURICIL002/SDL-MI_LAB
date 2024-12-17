from setuptools import find_packages
from setuptools import setup

setup(
    name='model_sc_msg',
    version='0.0.0',
    packages=find_packages(
        include=('model_sc_msg', 'model_sc_msg.*')),
)
