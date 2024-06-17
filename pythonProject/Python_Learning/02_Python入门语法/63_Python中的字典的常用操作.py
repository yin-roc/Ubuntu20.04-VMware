"""
演示字典的常用操作
"""

my_dict = {"王力宏" : 99, "周杰伦" : 88, "林俊杰" : 77}
# 新增元素
my_dict["张信哲"] = 66
print(f"字典经过新增元素后，结果：{my_dict}")

# 更新元素
my_dict["周杰伦"] = 33
print(f"字典经过更新元素后，结果：{my_dict}")

# 删除元素
score = my_dict.pop("周杰伦")
print(f"字典经过删除元素后，结果：{my_dict}，周杰伦的考试分数为：{score}")

# 清空元素
my_dict.clear()
print(f"字典被清空了，内容是：{my_dict}")

# 获取全部的 key
my_dict = {"王力宏" : 99, "周杰伦" : 88, "林俊杰" : 77}
keys = my_dict.keys()
print(f"字典的全部keys是：{keys}")

# 遍历字典
# 方式1：通过获取到全部的 key 来完成遍历
for key in keys:
    print(f"字典的key是：{key}")
    print(f"字典的value是：{my_dict[key]}")

# 方式2：直接对字典进行 for 循环，每一次循环都是直接得到 key
for key in my_dict:
    print(f"字典的key是：{key}")
    print(f"字典的value是：{my_dict[key]}")

# 统计字典内的元素的数量
num = len(my_dict)
print(f"字典中的元素数量有：{num}个")