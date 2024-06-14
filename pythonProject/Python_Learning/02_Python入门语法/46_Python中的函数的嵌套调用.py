"""
演示嵌套调用函数
"""

# 定义函数 func_b
def func_b():
    print("---2---")

# 定义函数 func_a，并在内部调用 func_b
def func_a():
    print("---1---")

    # 嵌套调用 func_b
    func_b()

    print("---3---")

# 调用函数 func_a
func_a()