"""
演示 lambda 匿名函数
"""

# 定义一个函数，接受其他函数输入
def Test_func(compute):
    result = compute(1, 2)
    print(f"结果是：{result}")

# 通过 lambda 匿名函数的形式，将匿名函数作为参数传入
Test_func(lambda x, y: x+y)

# 对比
def add(x, y):
    return x+y
Test_func(add)