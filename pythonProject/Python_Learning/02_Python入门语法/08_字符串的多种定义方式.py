"""
演示字符串的三种定义方式：
- 单引号定义法
- 双引号定义法
- 三引号定义法
"""

# 单引号定义法
name = 'heima'
print(type(name))

# 双引号定义法
name = "heimachengxuyuan"
print(type(name))

# 三引号定义法，写法和多行注释是一样的
name = """
wo
shi
heima
"""
print(type(name))

# 在字符串内，包含双引号
name = '"heima"'
print(name)
# 在字符串内，包含单引号
name = "'chengxuyuan'"
print(name)
# 使用转义字符 \ 解除引号的作用
name = "\"heimachengxuyuan"
print(name)
name = '\'heima\''
print(name)

