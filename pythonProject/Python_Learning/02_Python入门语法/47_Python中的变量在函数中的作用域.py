"""
演示在函数使用时，定义的变量作用域
"""

# # 演示局部变量
# def Test_a():
#     num = 100
#     print(num)
#
# Test_a()
# # error: print(num)
# # NameError: name 'num' is not defined
# print(num)

# # 演示全局变量
# num = 200
# def Test_a():
#     print(f"test_a:{num}")
#
# def Test_b():
#     print(f"Test_b:{num}")
#
# Test_a()
# Test_b()
# print(num)

# # 在函数内修改全局变量
# num = 200
# def Test_a():
#     print(f"test_a:{num}")
#
# def Test_b():
#     num = 500     # 局部变量
#     print(f"Test_b:{num}")
#
# Test_a()
# Test_b()
# print(num)

# global关键字，在函数内声明变量为全局变量
num = 200
def Test_a():
    print(f"test_a:{num}")

def Test_b():
    global num      # 设置内部定义的变量为全局变量
    num = 500       # 局部变量
    print(f"Test_b:{num}")

Test_a()
Test_b()
print(num)