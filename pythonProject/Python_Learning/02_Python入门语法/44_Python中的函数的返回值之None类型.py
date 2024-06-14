"""
演示特殊字面量：None
"""

# 无 return 语句的函数返回值
def say_hi():
    print("你好呀")

result = say_hi()
print(f"无返回值函数，返回的内容是:{result}")
print(f"无返回值函数，返回的内容是:{type(result)}")

# 主动返回 None 的函数
def say_hi2():
    print("你好呀")

result = say_hi2()
print(f"无返回值函数，返回的内容是:{result}")
print(f"无返回值函数，返回的内容是:{type(result)}")

# None 用于 if 判断
def check_age(age):
    if age > 18:
        return "SUCCESS"
    else:
        return None

result = check_age(16)
if not result:
    # 进入 if 表示 result 是 None 值，也就是 False
    print("未成年，不可进入")

# None 用于声明无初始内容的变量
name = None