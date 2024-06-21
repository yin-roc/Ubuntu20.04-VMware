"""
演示 JSON 数据和 Python 字典的相互转换
"""
import json

# 准备列表，列表内的每一个元素都是字典，将其转化为 JSON
data = [{"name":"张大山", "age":11}, {"name":"王大锤", "age":13}, {"name":"赵小虎", "age":16}]
json_str = json.dumps(data, ensure_ascii=False)
print(type(json_str))
print(json_str)
print("-----------------------------------------------------------------------")

# 准备字典，将字典转换为 JSON
d = {"name":"zhoujielun", "addr":"taibei"}
json_str = json.dumps(d)
print(type(json_str))
print(json_str)
print("-----------------------------------------------------------------------")

# 将 JSON 字符串转换为 Python 数据类型 [{k:v, k:v}, {k:v, k:v}]
s = '[{"name": "张大山", "age": 11}, {"name": "王大锤", "age": 13}, {"name": "赵小虎", "age": 16}]'
l = json.loads(s)
print(type(l))
print(l)
print("-----------------------------------------------------------------------")

# 将 JSON 字符串转换为 Python 数据类型 {k:v, k:v}
s = '{"name": "zhoujielun", "addr": "taibei"}'
d = json.loads(s)
print(type(d))
print(d)

