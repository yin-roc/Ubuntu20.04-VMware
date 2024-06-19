"""
演示捕获异常
"""

# # 基本捕获语法
# try:
#     f = open("76_abc.txt", "r", encoding="UTF-8")
# except:
#     print("出现异常了，因为文件不存在，我将open的模式，改为w模式去打开")
#     f = open("76_abc.txt", "w", encoding="UTF-8")

# # 捕获单个异常
# try:
#     print(name)
#     # 1 / 0
# except NameError as e:
#     print("出现了变量未定义的异常")
#     print(e)

# # 捕获多个异常
# try:
#     # 1 / 0
#     print(name)
#     pass
# except(NameError, ZeroDivisionError) as e:
#     print("出现了变量未定义 或者 除以 0 的异常错误")

# 未正确设置捕获异常类型，将无法捕获异常

# 捕获所有异常
try:
    f = open("76_abc.txt", "r", encoding="UTF-8")
    # 1/0
    # print(name)

except Exception as e:
    print("出现异常了")
    f = open("76_abc.txt", "w", encoding="UTF-8")
else:
    print("好高兴，没有异常")
finally:
    print("我是finally，有没有异常我都要执行")
    f.close()