class Student:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # __str__魔术方法
    def __str__(self):
        return f"Student类对象, name:{self.name}, age:{self.age}"

    # __lt__魔术方法
    def __lt__(self, other):
        return self.age < other.age

    # __le__魔术方法
    def __le__(self, other):
        return self.age <= other.age

    # __eq__魔术方法
    def __eq__(self, other):
        return self.age == other.age

stu = Student("周杰伦", 31)
stu2 = Student("林俊杰", 36)
# print(stu1 < stu2)
# print(stu1 >= stu2)
# print(stu1 == stu2)


print(stu)
print(str(stu))


