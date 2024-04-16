# from example_interfaces.srv import AddTwoInts
from rclpy.node import Node
import rclpy
from custom_interface.srv import SendBotCommand


class baseClient(Node):
    def __init__(self,):
        super().__init__('base_client')
        self.cli = self.create_client(SendBotCommand, "sendCommand")

        while not self.cli.wait_for_service(timeout_sec=1):
            self.get_logger().info("Server not listening...")
        
        self.future_request = SendBotCommand.Request() # We should send request in terms of interfaces (?)

    def send_request(self, cmd):
        self.future_request.cmd = cmd

        print("SENT REQUEST!")
        print(cmd)

        self.process = self.cli.call_async(self.future_request)
        rclpy.spin_until_future_complete(self, self.process)

        print("GOT RESPONSE!")
        print(self.process.result())
        return self.process.result()

def main():
    rclpy.init()
    base_client = baseClient()
    response = base_client.send_request(input("Send your data: ")) # now the command is f only.
    base_client.get_logger().info(
        "The Output of Server is: %d\n" % (response.out))
    base_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
