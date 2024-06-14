"""
演示：定义函数返回值的语法格式
"""

# 定义一个函数，完成 2 数相加功能
def add(a, b):
    result = a + b
    # 通过返回值，将相加的结果返回给调用者
    return result

# 函数的返回值，可以通过变量去接收
r = add(5, 6)
print(r)