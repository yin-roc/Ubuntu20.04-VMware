"""
演示类和对象的关系：即面向对象的编程套路（思想）
"""
import sys

# 设计一个闹钟类
class Clock:
    id = None       # 序列化
    price = None    # 价格


    def ring(self):
        if sys.platform.startswith('win'):
            import winsound
            winsound.Beep(1000, 1000)  # 频率和持续时间（毫秒）
        else:
            from playsound import playsound
            playsound('/mnt/hgfs/Win_Ubuntu_Share/sound.mp3')  # 替换为你的声音文件路径

# 构建 2 个闹钟对象并让其工作
clock1 = Clock()
clock1.id = "003032"
clock1.price = 19.99
print(f"闹钟ID：{clock1.id}, 价格：{clock1.price}")
clock1.ring()

clock2 = Clock()
clock2.id = "003033"
clock2.price = 21.99
print(f"闹钟ID：{clock2.id}, 价格：{clock2.price}")
clock2.ring()