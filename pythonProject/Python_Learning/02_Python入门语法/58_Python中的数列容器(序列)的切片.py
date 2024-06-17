"""
演示对序列进行切片操作
"""

# 对 list 进行切片,从 1 开始, 4 结束,步长为 1
my_list = [0, 1, 2, 3, 4, 5, 6]
result1 = my_list[1:4]      # 步长默认是1,所以可以省略不写
print(f"结果1:{result1}")

# 对 tuple 进行切片,从头开始,到最后结束,步长为 1
my_tuple = (0, 1, 2, 3, 4, 5, 6)
result2 = my_tuple[:]     # 起始和结束不写表示从头到尾,步长为 1 可以省略
print(f"结果2:{result2}")

# 对 str 进行切片,从头开始,到最后结束,步长为 2
my_str = "01234567"
result3 = my_str[::2]
print(f"结果3:{result3}")

# 对 str 进行切片,从头开始,到最后结束,步长为 2
my_str = "01234567"
result4 = my_str[::-1]      # 等同于将序列反转了
print(f"结果4:{result4}")

# 对列表进行 my_list = [0, 1, 2, 3, 4, 5, 6] 切片,从 3 开始,到 1 结束,步长 -1
my_list = [0, 1, 2, 3, 4, 5, 6]
result5 = my_list[3:1:-1]
print(f"结果5:{result5}")

# 对元组进行切片,从头开始,到尾结束,步长 -2
my_tuple = (0, 1, 2, 3, 4, 5, 6)
result6 = my_tuple[::-2]
print(f"结果6:{result6}")
