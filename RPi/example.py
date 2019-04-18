import py_qmc5883l
import time
import math

pi = math.pi

sensor = py_qmc5883l.QMC5883L()
while True:
    # sensor.declination = -0.119
    m = sensor.get_magnet()
    print(m)
    x = m[0]
    y = m[1]
    z = m[2]
    print("x = ", x)
    print("y = ", y)
    heading = math.atan2(y, x)
    if heading > 2*pi:
        heading = heading - 2*pi
    if heading < 0:
        heading = heading + 2*pi
        
    heading_angle = math.degrees(heading)
    print ("Heading Angle = %d°" %heading_angle)
    time.sleep(1)