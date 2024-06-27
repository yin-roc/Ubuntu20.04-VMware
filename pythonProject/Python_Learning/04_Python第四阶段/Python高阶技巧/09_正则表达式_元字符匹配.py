"""
演示 Python 正则表达式使用元字符进行匹配
"""
import re

# # 单字符匹配
# s = "itheima1 @@python2 !!666 ## itccast3"
#
# # 找出所有数字
# result = re.findall(r'\d', s)       # 字符串前面带上 r 的标记， 表示字符串转义字符无效，就是普通字符的意思
# print(result)
#
# # 找出所有的非单词字符
# result = re.findall(r'\W', s)
# print(result)
#
# # 找出所有的单词字符 和 数字
# result = re.findall(r'[a-zA-Z]', s)
# print(result)
# result = re.findall(r'[0-9]', s)
# print(result)

# # 匹配账号, 只能由字母和数字组成，长度限制 6 到 10 位
# r = '^[a-zA-Z0-9]{6,10}$'       # 注意正则表达式没有多余的空格
# s = '123456'
# print(re.findall(r, s))

# # 匹配 QQ 号：要求纯数字，长度 5-11，第一位不为 0
# r = '^[1-9][0-9]{4,10}$'
# s = '012345678'
# print(re.findall(r, s))

# 匹配邮箱地址，只允许 qq、163、gmail这三种邮箱地址
# {内容}.{内容}.{内容}.{内容}.{内容}.{内容}.{内容}@{内容}.{内容}.{内容}
r = '(^[\w-]+(\.[\w-]+)*@(qq|163|gmail)(\.[\w-]+)+$)'
s = 'a.b.c.d.e@163.com.a.z.c.d.e'
print(re.findall(r, s))
print(re.match(r, s))
