"""
演示数据容器的通用功能
"""

my_list = [1, 2, 3, 4, 5]
my_tuple = (1, 2, 3, 4, 5)
my_str = "abcdefg"
my_set = {1, 2, 3, 4, 5}
my_dict = {"key1" : 1, "key2" : 2, "key3" : 3, "key4" : 4, "key5" : 5}

# len 元素个数
print(f"列表元素个数有：{len(my_list)}")
print(f"元组元素个数有：{len(my_tuple)}")
print(f"字符串元素个数有：{len(my_str)}")
print(f"集合元素个数有：{len(my_set)}")
print(f"字典元素个数有：{len(my_dict)}")

# max 最大元素max
print(f"列表最大的元素是：{max(my_list)}")
print(f"元组最大的元素是：{max(my_tuple)}")
print(f"字符串最大的元素是：{max(my_str)}")
print(f"集合最大的元素是：{max(my_set)}")
print(f"字典最大的元素是：{max(my_dict)}")

# min 最小元素min
print(f"列表最小的元素是：{min(my_list)}")
print(f"元组最小的元素是：{min(my_tuple)}")
print(f"字符串最小的元素是：{min(my_str)}")
print(f"集合最小的元素是：{min(my_set)}")
print(f"字典最小的元素是：{min(my_dict)}")

# 类型转换:容器转列表
print(f"列表转列表的结果是：{list(my_list)}")
print(f"元组转列表的结果是：{list(my_tuple)}")
print(f"字符串转列表的结果是：{list(my_str)}")
print(f"集合转列表的结果是：{list(my_set)}")
print(f"字典转列表的结果是：{list(my_dict)}")

# 类型转换:容器转元组
print(f"列表转元组的结果是：{tuple(my_list)}")
print(f"元组转元组的结果是：{tuple(my_tuple)}")
print(f"字符串转元组的结果是：{tuple(my_str)}")
print(f"集合转元组的结果是：{tuple(my_set)}")
print(f"字典转元组的结果是：{tuple(my_dict)}")

# 类型转换:容器转字符串
print(f"列表转字符串的结果是str：{str(my_list)}")  # 实际上是: "[1, 2, 3, 4, 5]"
print(f"元组转字符串字符串的结果是：{str(my_tuple)}")  # 实际上是: "(1, 2, 3, 4, 5)"
print(f"字符串转字符串的结果是：{str(my_str)}")
print(f"集合转字符串的结果是：{str(my_set)}")
print(f"字典转字符串的结果是：{str(my_dict)}")

# 类型转换:容器转集合set
print(f"列表转集合的结果是：{set(my_list)}")
print(f"元组转集合的结果是：{set(my_tuple)}")
print(f"字符串转集合的结果是：{set(my_str)}")
print(f"集合转集合的结果是：{set(my_set)}")
print(f"字典转集合的结果是：{set(my_dict)}")

# 进行容器的排序
# 排序的结果都是存入列表中
my_list = [3, 1, 2, 5, 4]
my_tuple = (3, 1, 2, 5, 4)
my_str = "dbfgeac"
my_set = {3, 1, 2, 5, 4}
my_dict = {"key3" : 1, "key1" : 2, "key2" : 3, "key5" : 4, "key4" : 4}

print(f"列表对象的排序结果:{sorted(my_list)}")
print(f"列表对象的排序结果:{sorted(my_tuple)}")
print(f"列表对象的排序结果:{sorted(my_str)}")
print(f"列表对象的排序结果:{sorted(my_set)}")
print(f"列表对象的排序结果:{sorted(my_dict)}")

print(f"列表对象的反向排序结果:{sorted(my_list, reverse=True)}")
print(f"列表对象的反向排序结果:{sorted(my_tuple, reverse=True)}")
print(f"列表对象的反向排序结果:{sorted(my_str, reverse=True)}")
print(f"列表对象的反向排序结果:{sorted(my_set, reverse=True)}")
print(f"列表对象的反向排序结果:{sorted(my_dict, reverse=True)}")
