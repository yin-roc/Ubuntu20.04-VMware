"""
演示 tuple 元组的定义与操作
"""

# 定义元组
t1 = (1, "Hello", True)
t2 = ()
t3 = tuple()
print(f"t1 的类型是：{type(t1)}，内容是：{t1}")
print(f"t2 的类型是：{type(t2)}，内容是：{t2}")
print(f"t3 的类型是：{type(t3)}，内容是：{t3}")

# 定义单个元素的元组
t4 = ("hello",)
print(f"t4 的类型是: {type(t4)}, t4的内容是: {t4}")

# 元素的嵌套
t5 = ((1, 2, 3), (4, 5, 6))
print(f"t5 的类型是: {type(t5)}, t5的内容是: {t5}")

# 下标索引取出内容
num = t5[1][2]
print(f"从嵌套元组中取出的数据是:{num}")

# 元组的操作: index 查找方法
t6 = ("传智教育", "黑马程序员", "Python")
index = t6.index("黑马程序员")
print(f"在元组 t6 中查找黑马程序员,下标是: {index}")

# 元组的操作: count 统计方法
t7 = ("传智教育", "黑马程序员", "黑马程序员", "黑马程序员", "Python")
num = t7.count("黑马程序员")
print(f"在元组 t7 中统计黑马程序员的数量有: {num}个")
# 元组的操作: len 函数统计元组元素数量
t8 = ("传智教育", "黑马程序员", "黑马程序员", "黑马程序员", "Python")
num = len(t8)
print(f"在元组 t8 中元素有: {num}个")

# 元组的遍历: while
index = 0
while index < len(t8):
    print(f"1元组的元素有: {t8[index]}")
    # 至关重要
    index += 1

# 元组的遍历: for
for element in t8:
    print(f"2元组的元素有: {element}")

# error: 修改元组的内容
# t8[0] = "itcast"

# 定义一个元组
# 修改元组里面列表元素的内容
t9 = (1, 2, ["itheima", "itcast"])
print(f"t9 的内容是: {t9}")
t9[2][0] = "黑马程序员"
t9[2][1] = "chuanzhijiaoyu"
print(f"t9 的内容是: {t9}")

# 练习
t1 = ('周杰伦', 11, ['football', 'music'])
# 查询年龄所在的下标位置
num = t1.index(11)
print(f"查询年龄所在的下标位置为：{num}")
# 查询学生的姓名
print(f"学生的姓名为：{t1[0]}")
# 删除学生爱好中的足球
t1[2].pop(0)
print(f"删除足球后的t1为：{t1}")
# 增加 coding 到爱好 list 内
t1[2].append('coding')
print(f"增加爱好coding后的t1为：{t1}")


# 增加爱好：coding 到爱好 list 内