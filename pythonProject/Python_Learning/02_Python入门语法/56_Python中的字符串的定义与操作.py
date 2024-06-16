"""
演示以数据容器的角色，学习字符串的相关操作
"""
my_str = "itheima and itcast"
# 通过下标索引取值
value = my_str[2]
value2 = my_str[-16]
print(f"从字符串{my_str}取下标为2的元素的值是：{value},取下标为-16的元素的值是：{value2}")

# error 修改字符串的值
# my_str[2] = "H"

# index 方法
value = my_str.index("and")
print(f"在字符串{my_str}中查找 and，其起始下标是：{value}")

# replace 方法
new_my_str = my_str.replace("it", "程序")
print(f"将字符串{my_str}，进行替换后得到：{new_my_str}")

# split 方法
my_str = "hello python itheima itcast"
my_str_list = my_str.split(" ")
print(f"将字符串{my_str}进行split切割后得到：{my_str_list}, 类型是：{type(my_str_list)}")

# strip 方法
my_str = "  itheima and itcast  "
new_my_str = my_str.strip()     # 不传入参数，去除首尾空格
print(f"字符串{my_str}被 strip 后，结果：{new_my_str}")

my_str = "12itheima and itcast21"
# 注意，传入的是 "12",其实就是："1" 和 "2" 都会移除，是按照单个字符。
new_my_str = my_str.strip("12")     # 不传入参数，去除首尾空格
print(f"字符串{my_str}被 strip('12') 后，结果：{new_my_str}")

# 统计字符串中某字符串的出现次数
my_str = "itheima and itcast"
count = my_str.count("it")
print(f"字符串{my_str}中 it 出现的次数是:{count}")

# 统计字符串的长度
num = len(my_str)
print(f"字符串{my_str}的长度是：{num}")

