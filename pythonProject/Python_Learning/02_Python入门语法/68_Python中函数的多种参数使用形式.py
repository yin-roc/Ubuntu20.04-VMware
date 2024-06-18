"""
演示多种传参的形式
"""
def userinfo(name, age, gender):
    print(f"姓名是:{name}, 年龄是:{age}, 性别:{gender}")

# 位置参数 — 默认使用形式
userinfo('小明', 20, '男')

# 关键字参数
userinfo(name='小王', age=11, gender='女')
userinfo(age=10, gender='女', name='潇潇')   # 可以不按照参数的定义顺序传参
userinfo('甜甜', gender='女', age=9)

# 缺省参数（默认值）
def userinfo(name, age, gender='男'):
    print(f"姓名是:{name}, 年龄是:{age}, 性别:{gender}")
userinfo('小天', 13)
userinfo('小天', 13, gender='女')

# 不定长 — 位置不定长，*号
# 不定长定义的形式参数会作为元组存在，接收不定长数量的参数传入
def user_info(*args):
    print(f"args参数的类型是：{type(args)},内容是：{args}")

user_info(1, 2, 3, '小明', '男孩')

# 不定长 — 关键字不定长，**号  key-value
def user_info(**args):
    print(f"args参数的类型是：{type(args)},内容是：{args}")
user_info(name='小王', age=11, gender='男孩')