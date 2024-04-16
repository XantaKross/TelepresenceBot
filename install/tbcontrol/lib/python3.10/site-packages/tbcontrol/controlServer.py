from rclpy.node import Node
import rclpy
from custom_interface.srv import SendBotCommand

# Creating a node through inheritance.
class baseServer(Node):
    def __init__(self,):
        print("Running Control SERVER")
        super().__init__('base_server')

        self.count = 0

        # Creating a service.           # ?       # name/Identifier   # function call.
        self.srv = self.create_service(SendBotCommand, 'sendCommand', self.sendCommand_callback)

    def sendCommand_callback(self, request, response):
        print("GOT REQUEST!")

        # Creating the actual function.
        response.out = True if request.cmd else False

        self.get_logger().info('\nIncoming Command: %s' % (request.cmd))
        self.get_logger().info('\nCompleted: %d' % self.count)
        self.count += 1

        print("SENT RESPONSE!")

        return response

def main():
    rclpy.init()
    obj = baseServer()
    rclpy.spin(obj)
    rclpy.shutdown()

if __name__ == '__main__':
    main()