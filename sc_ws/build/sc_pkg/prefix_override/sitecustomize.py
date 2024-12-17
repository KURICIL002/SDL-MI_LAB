import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/pragalbhv/ros2-workspaces/sc_ws/install/sc_pkg'
