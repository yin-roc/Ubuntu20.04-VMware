"""
演示数据容器字典的定义
"""

# 定义字典
my_dict1 = {"王力宏" : 99, "周杰伦" : 88, "林俊杰" : 77}
# 定义空的字典
my_dict2 = {}   # 集合不能使用 my_set = {}, 只能使用 my_set = set()
my_dict3 = dict()
print(f"字典1的内容是：{my_dict1}，类型：{type(my_dict1)}")
print(f"字典2的内容是：{my_dict2}，类型：{type(my_dict2)}")
print(f"字典3的内容是：{my_dict3}，类型：{type(my_dict3)}")

# 定义重复 key 的字典
my_dict1 = {"王力宏" : 99, "王力宏" : 88, "林俊杰" : 77}
print(f"重复 key 的字典的内容是：{my_dict1}")

# 从字典中基于 Key 获取 Value
my_dict1 = {"王力宏" : 99, "周杰伦" : 88, "林俊杰" : 77}
score = my_dict1["王力宏"]
print(f"王力宏的考试分数是：{score}")
score = my_dict1["周杰伦"]
print(f"周杰伦的考试分数是：{score}")

# 定义嵌套字典
stu_score_dict = {
    "wanglihonh" : {
        "yuwen" : 77,
        "shuxue" : 66,
        "yingyu" : 33
    },
    "zhoujielun" : {
        "yuwen" : 88,
        "shuxue" : 86,
        "yingyu" : 55
    },
    "linjunjie" : {
        "yuwen" : 99,
        "shuxue" : 96,
        "yingyu" : 66
    }
}
print(f"学生的考试信息是：{stu_score_dict}")

# 从嵌套字典中获取信息
# 看一下周杰伦的语文信息
score = stu_score_dict["zhoujielun"]["yuwen"]
print(f"zhoujielun的yuwen考试分数是：{score}")
score = stu_score_dict["linjunjie"]["yingyu"]
print(f"linjunjie的yingyu考试分数是：{score}")


