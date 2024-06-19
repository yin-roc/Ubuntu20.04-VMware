"""
演示 对文件的追加写入
"""

# 打开不存在的文件
f = open("74_test.txt", "a", encoding="UTF-8")

# write 写入
f.write("黑马程序员")

# flush 刷新
f.flush()

# close 关闭
f.close()

# 打开一个存在的文件
f = open("74_test.txt", "a", encoding="UTF-8")

# write 写入 flush 刷新
f.write("\n学Python最佳选择")

# close关闭
f.close()