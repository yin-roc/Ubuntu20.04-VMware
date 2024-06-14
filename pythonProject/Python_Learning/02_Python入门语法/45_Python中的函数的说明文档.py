"""
演示对函数进行文档说明
"""


# 定义函数，进行文档说明
def add(x, y):
    """
    add 函数可以接受 2 个参数，进行 2 数相加的功能
    :param x: 相加的数字 1
    :param y: 相加的数字 2
    :return: 返回相加的结果
    """
    result = x + y
    print(f"2 数相加的结果是:{result}")
    return result


add(5, 6)
