#!/usr/bin/env python
import rospy
from sensor_msgs.msg import NavSatFix

def talker():
    pub = rospy.Publisher("gps_data", NavSatFix, queue_size=10)
    rospy.init_node("gpsDataTest", anonymous=True)
    rate = rospy.Rate(10)
    while not rospy.is_shutdown():
        _testData = NavSatFix()
        _testData.longitude =  121.1
        _testData.latitude = 31
        pub.publish(_testData)
        rate.sleep()


if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
