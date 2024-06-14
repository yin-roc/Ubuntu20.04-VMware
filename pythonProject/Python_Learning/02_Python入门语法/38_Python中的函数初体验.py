"""
演示：快速体验函数的开发及应用
"""
# 需求，统计字符串的长度，不使用内置函数 len()
str1 = "itheima"
str2 = "itcast"
str3 = "python"

# 定义一个计数变量
count = 0
for i in str1:
    count += 1
print(f"字符串{str1}的长度是:{count}")

count = 0
for i in str2:
    count += 1
print(f"字符串{str2}的长度是:{count}")

count = 0
for i in str3:
    count += 1
print(f"字符串{str3}的长度是:{count}")

# 可以使用函数，来优化过程
def my_len(data):
    count = 0
    for i in data:
        count += 1
    print(f"字符串{data}的长度是{count}")

my_len(str1)
my_len(str2)
my_len(str3)