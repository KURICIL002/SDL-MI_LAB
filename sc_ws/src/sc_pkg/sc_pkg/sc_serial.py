from enum import Enum, auto
import serial
import hid


class apexSpinCoaterDriver:

    def __init__(self):  # Init function starts serial communication
        self.device = None
        self.device = hid.Device(1121,32) #1121 --> Vendor ID, 32 --> Product ID
        self.device_status = spinCoaterStatus.READY
        self.is_vacuum_ON = False # write code to check vacuum status from device if possible
        
    def read_data(self, timeout=500):
        try:
            # Read from the HID device with a timeout
            return self.device.read(65, timeout)
        except Exception as ex:
            print(f"USB Communication Failed: {ex}")

    def write_data(self, data):
        try:
            # Write to the HID device
            self.device.write(data)
        except Exception as ex:
            print(f"USB Communication Failed: {ex}")

    def get_data_from_pic(self):
        data_from_pic = [0] * 4
        try:
            hid_device_data = self.read_data()
            data_from_pic[0] = hid_device_data[1]
            data_from_pic[1] = hid_device_data[2]
            data_from_pic[2] = hid_device_data[3]
            data_from_pic[3] = hid_device_data[4]
        except Exception as ex:
            print(f"USB Communication Failed: {ex}")
        return data_from_pic
    
    def send_out_data(self, x1, x2, x3, x4):
        data_from_pic = []
        try:
            # Create the byte array to send
            data = [0] * 65  # Assuming OutputReportByteLength is 65
            data[1] = x1
            data[2] = x2
            data[3] = x3
            data[4] = x4
            # Send data to HID device
            self.write_data(data)
            data_from_pic = self.get_data_from_pic()
        except Exception as ex:
            print(f"USB Communication Failed: {ex}")
        return data_from_pic
    
    def turnVacuumON(self):
        try:
            if self.device_status == spinCoaterStatus.READY:
                self.send_out_data(self.device, 5, 1 , 0, 0)
                print("Turning vacuum ON....")
            else:
                raise Exception("Spin coater is not ready.")
        except Exception as ex:
            self.device_status = spinCoaterStatus.DEVICE_FAULT
            print(f"Failed to turn vacuum ON : {ex}")


    def turnVacuumOFF(self):
        try:
            if not (self.device_status == spinCoaterStatus.COATING):
                self.send_out_data(self.device, 5, 2 , 0, 0)
                print("Turning vacuum OFF....")
            elif self.device_status == spinCoaterStatus.COATING:
                raise Exception("Coating in progress.")
            elif not (self.device_status == spinCoaterStatus.READY):
                raise Exception("Device is not ready")
        except Exception as ex:
            self.device_status = spinCoaterStatus.DEVICE_FAULT
            print(f"Failed to turn vacuum OFF : {ex}")


    def setRPM(self,rpm):    
        try:    
            num = abs(int(round(rpm)))
            if self.is_vacuum_ON:
                self.send_out_data(4, num % 256, num // 256, 0)
            else:
                raise Exception("vacuum is OFF")
        except Exception as ex:
            self.device_status = spinCoaterStatus.DEVICE_FAULT
            print(f"Failed to set RPM : {ex}")

    def getRPM(self):    
        try:
            num_array = self.send_out_data(1, 0, 0, 0)
            return (num_array[2] * 256) + num_array[1]
        except Exception as ex:
            self.device_status = spinCoaterStatus.DEVICE_FAULT
            print(f"Failed to get RPM : {ex}")

class spinCoaterStatus(Enum):
    READY = auto()
    COATING = auto()
    COATING_COMPLETED = auto()
    DEVICE_FAULT = auto()

