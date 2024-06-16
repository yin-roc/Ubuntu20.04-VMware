my_str = "itheima itcast boxuegu"
count = my_str.count("it")
print(f"{my_str}中 'it' 的出现次数为：{count}")

my_str1 = my_str.replace(" ", "|")
print(f"{my_str}中将空格换为'|'后结果为:{my_str1}")

my_str2 = my_str1.split("|")
print(f"{my_str}中按照'|'分割后结果为:{my_str2}")

