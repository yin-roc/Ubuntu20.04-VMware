class Student:
    name = None
    age = None
    address = None

    def __init__(self, name, age, address):
        self.name = name
        self.age = age
        self.address = address

my_list = []
# stu = Student()

for element in range(1, 4):
    print(f"当前录入第{element}位学生信息，总共需要录入3位同学信息")
    name = input("请输入学生的姓名：")
    age = input("请输入学生的年龄：")
    address = input("请输入学生的地址：")
    stu = Student(name, age, address)
    my_list.append((stu.name, stu.age, stu.address))
    print(f"学生{element}信息录入完成，信息为：【学生姓名：{stu.name}, 年龄:{stu.age}, 地址：{stu.address}】")

print(f"所有信息为：{my_list}")