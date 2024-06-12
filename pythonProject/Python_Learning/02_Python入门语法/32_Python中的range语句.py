"""
演示 Python 中的 range() 语句的基本使用
"""

# # range 语法1：range(num)
# for x in range(10):
#     print(x)
#
# # range 语法2：range(num1, num2)
# for x in range(5, 10):
#     # 从 5 开始，到 10 结束(不包含 10 本身)的一个数字序列
#     print(x)
#
# # range 语法3：range(num1, num2, step)
# for x in range(5, 10, 2):
#     # 从 5 开始，到 10 结束（不包含10本身）的一个数字序列，数字之间的间隔是2
#     print(x)

count = 0
num = int(input("请输入一个数:"))
for x in range(1, num):
    if(x % 2 == 0):
        count += 1
print(f"1到{num}范围内，共有{count}个偶数")
