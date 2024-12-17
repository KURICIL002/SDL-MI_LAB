#!usr/bin/env python3

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from rclpy.subscription import Subscription
from rclpy.publisher import Publisher

import model_sc_msg
from datetime import datetime

from .sc_serial import apexSpinCoaterDriver
from model_sc_msg.msg import Modelcomm as SCcommands
from model_sc_msg.msg import Modelsta as SCstatus

class IKADriverROS(Node):

    def __init__(self):
        super().__init__('ikadriver_ros')
        self.get_logger().info("Apex spin coater driver started")

        # Initialize driver object
        self.apexSpinCoater = apexSpinCoaterDriver()

        # Define QoS profile for both publisher and subscriber
        qos = QoSProfile(depth=10)  # Adjust depth as needed

        # Create subscriber for commands
        self.command_sub: Subscription = self.create_subscription(
            SCcommands,
            "apex_SpinCoater_Commands",
            self.callback_commands,
            qos,
        )

        # Create publisher for status messages
        self.status_pub: Publisher = self.create_publisher(
            SCstatus,
            "apex_SpinCoater_Status",
            qos,
        )

    #     self.timer = self.create_timer(1.0, self.publish_status)

    # def publish_status(self):
    #     rpm = self.apexSpinCoater.getRPM()
    #     is_vacuum_set = self.apexSpinCoater.is_vacuum_ON
    #     SC_status = self.apexSpinCoater.device_status

    #     # Create message object and populate data
    #     status_msg = SCstatus()
    #     status_msg.apexSC_rpm = int(rpm)
    #     status_msg.apexSC_vacuum = bool(is_vacuum_set)
    #     status_msg.apexSC_status = int(SC_status)

    #     # Publish status message
    #     self.status_pub.publish(status_msg)

    #     self.get_logger().info(
    #         f"SpinCoater RPM: {rpm} | Vacuum status: "
    #         + ("ON" if is_vacuum_set else "OFF")
    #         + f" | Device status: {SC_status.name}"
    #     )

    def turnVacuumON(self):
        self.apexSpinCoater.turnVacuumON()
        self.get_logger().info("Turning vacuum ON")

    def turnVacuumOFF(self):
        self.apexSpinCoater.turnVacuumOFF()
        self.get_logger().info("Turning vacuum OFF")

    def setRPM(self, rpm, duration):
        self.apexSpinCoater.setRPM(rpm)
        current_time = datetime.now().strftime("%H:%M:%S")
        self.get_logger().info(f"Setting RPM to: {rpm}")
        self.get_logger().info(
            f"Spin coating for {duration} minutes started at {current_time}"
        )
        rclpy.spin_once(self, timeout_sec=duration * 60)  # Blocking for duration

    def stopCoating(self):
        current_time = datetime.now().strftime("%H:%M:%S")
        self.apexSpinCoater.setRPM(0)
        self.get_logger().info(f"Spin coating completed at {current_time}")

    # Callback for subscriber. Calls correct function depending on command received
    def callback_commands(self, msg):
        if msg.apex_sc_command == 1:
            self.turnVacuumON()
        elif msg.apex_sc_command == 3:
            self.turnVacuumOFF()
        elif msg.apex_sc_command == 2:
            self.setRPM(msg.apex_sc_rpm, msg.apex_sc_duration)
            self.stopCoating()
        elif msg.apex_sc_command == 4:
            self.stopCoating()
        else:
            self.get_logger().warn("Invalid command")


def main():
    rclpy.init(args=None)
    node = IKADriverROS()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()