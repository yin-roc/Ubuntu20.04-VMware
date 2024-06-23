"""
演示函数和方法的类型注释
"""

# 对参数进行类型注释
def add(x: int, y : int):
    return x + y


# 对返回值进行类型注释
def func(data: list) -> list:
    return data

print(func(1))