# # 解决 print 输出不换行
# print("hello", end='')
# print("hello", end='')
# print()
#
# # 解决 print 多行字符串进行对齐
# print("hello\tworld")
# print("itheima\tbest")

i = 1
while i <= 9:
    j = 1
    while j <= i:
        print(f"{i}*{j}={i*j}\t", end='')
        j += 1
    print()
    i += 1

