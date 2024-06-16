# 定义这个列表，并用变量接收它
list = [21, 25, 21, 23, 22, 20]
print(f"列表为 {list}")

# 追加一个数字31，到列表的尾部
list.append(31)
print(f"追加数字 31 后，列表为: {list}")

# 追加一个新列表[29, 33, 30]，到列表的尾部
list2 = [29, 33, 30]
list.extend(list2)
print(f"追加新列表[29,33,30]后，列表为: {list}")

# 取出第一个元素（应是：21）
num1 = list[0]
print(f"第一个元素是: {num1}")

# 取出最后一个元素（应是：30）
num2 = list[-1]
print(f"最后一个元素是: {num2}")

# 查找元素31，在列表中的下标位置
index = list.index(31)
print(f"元素 31 在列表中的下标位置: {index}")