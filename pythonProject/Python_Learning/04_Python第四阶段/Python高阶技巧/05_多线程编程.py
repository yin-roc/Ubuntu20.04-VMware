"""
演示 多线程编程的使用
"""

import time
import threading

# def sing():
#     while True:
#         print("我在唱歌，啦啦啦...")
#         time.sleep(1)

def sing(msg):
    while True:
        print(msg)
        time.sleep(1)

# def dance():
#     while True:
#         print("我在跳舞，呱呱呱...")
#         time.sleep(1)

def dance(msg):
    while True:
        print(msg)
        time.sleep(1)

if __name__ == '__main__':
    # sing()
    # dance()
    # # 创建一个唱歌线程
    # sing_thread = threading.Thread(target=sing)
    sing_thread = threading.Thread(target=sing, args=("我要唱歌，哈哈哈",))
    # # 创建一个跳舞线程
    # dance_thread = threading.Thread(target=dance)
    dance_thread = threading.Thread(target=dance, kwargs={"msg":"我在跳舞，啦啦啦"})
    # 进程启动
    sing_thread.start()
    dance_thread.start()