"""
演示 对文件的写入
"""
import time

# 打开不存在的文件
f = open("73_test.txt", "w", encoding="UTF-8")
# write 写入
f.write("Hello World")

# flush 刷新
# f.flush()

time.sleep(5)

# close 关闭
f.close()   # close 方法，内置了 flush 功能

# 打开一个存在的文件
f = open("73_test.txt", "w", encoding="UTF-8")
# write 写入 flush 刷新
f.write("黑马程序员")
# close关闭
f.close()
