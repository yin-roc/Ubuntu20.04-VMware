"""
演示 Python 正则表达式 re 模块的 3 个基础匹配方法
"""

import re

# match
# s= "python itheima python python"
# # match 从头匹配
# result = re.match("python", s)
# print(result)
# print(result.span())
# print(result.group())

# s= "1python itheima python python"
# # match 从头匹配
# result = re.match("python", s)
# print(result)


# # search 搜索匹配
# s= "1python itheima python python"
# result = re.search("python", s)
# print(result)

# findall 搜索全部匹配
s= "1python itheima python python"
result = re.findall("python2", s)
print(result)
