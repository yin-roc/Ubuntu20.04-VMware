"""
演示 对文件的读取
"""
import time

# 打开文件
f = open('71_测试.txt', 'r', encoding='UTF-8')
# w 和 a 模式下会自动创建，r 模式下则不能
# f = open('/home/yin-roc/71_测试.txt', 'w', encoding='UTF-8')
# print(type(f))

# # 读取文件 - read()
# print(f"读取 10 个字节的结果：{f.read(10)}")
# # 连续两次 read，会从上一次读完的结尾开始读。
# print(f"read 方法读取全部内容的结果：{f.read()}")
# print("---------------------------------------------")

# # 读取文件 - readlines()
# lines = f.readlines()
# print(f"lines 对象的类型：{type(lines)}")
# print(f"lines 对象的内容：{lines}")

# # 读取文件 - readline()
# line1 = f.readline()
# line2 = f.readline()
# line3 = f.readline()
# print(f"第一行数据是：{line1}")
# print(f"第二行数据是：{line2}")
# print(f"第三行数据是：{line3}")

# # for 循环读取文件行
# for line in f:
#     print(f"每一行数据是:{line}")

# # 文件的关闭
# f.close()
# time.sleep(5)   # 延时 5 s

# with open 语法操作文件
with open('71_测试.txt', 'r', encoding='UTF-8') as f:
    for line in f:
        print(f"每一行数据是: {line}")
time.sleep(5)