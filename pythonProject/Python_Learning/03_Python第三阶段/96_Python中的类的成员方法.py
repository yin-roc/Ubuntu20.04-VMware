"""
演示面向对象类中的成员方法定义和使用
"""

# 定义一个带有成员方法的类
class Student:
    name = None         # 记录学生的姓名

    def say_hi(self):
        print(f"hello everyone, my name is {self.name}")

    def say_hi_2(self, msg):
        print(f"hello everyone, my name is {self.name}, {msg}")

stu_1 = Student()
stu_1.name = "zhoujielun"
stu_1.say_hi()
stu_1.say_hi_2("哎呦不错哦")

stu_2 = Student()
stu_2.name = "linjunjie"
stu_2.say_hi()
stu_2.say_hi_2("小伙子我看好你")

