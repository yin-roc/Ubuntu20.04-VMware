"""
演示函数作为参数传递
"""

# 定义一个函数，接收另一个函数作为传入参数
def Test_func(compute):
    result = compute(1, 2)  # 确定 compute是函数
    print(type(compute))
    print(f"compute 参数的类型是：{type(compute)}")
    print(f"计算结果：{result}")

# 定义一个函数，准备作为参数传入另一个函数
def compute(x, y):
    return x + y

# 调用，并传入参数
Test_func(compute)