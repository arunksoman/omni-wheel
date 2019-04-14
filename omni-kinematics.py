import socket, traceback
import ast
import math
host = ''
port = 8111

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
s.setsockopt(socket.SOL_SOCKET, socket.SO_BROADCAST, 1)
s.bind((host, port))

while True:
    try:
        message, address = s.recvfrom(1024)
        # print(message)
        new = ast.literal_eval(message.decode())
        pos = [v for v in new.values()]
        # print(pos)
        required_pos = [pos[6], pos[7]]
        print(required_pos)
        theta = math.atan2(required_pos[1], required_pos[0])
        print(math.degrees(theta))

        magnitude = math.sqrt(((required_pos[0]*required_pos[0])+(required_pos[1]*required_pos[1])))
        print(magnitude)
        if magnitude > 50.0:
            Vx = magnitude * math.cos(theta)
            Vy = magnitude * math.sin(theta)
            sqrt3o2 = 1.0 * math.sqrt(3) / 2
            w0 = -Vx
            w1 = 0.5 * Vx - sqrt3o2 * Vy
            w2 = 0.5 * Vx + sqrt3o2 * Vy

    except (KeyboardInterrupt, SystemExit):
        raise
    except:
        traceback.print_exc()
