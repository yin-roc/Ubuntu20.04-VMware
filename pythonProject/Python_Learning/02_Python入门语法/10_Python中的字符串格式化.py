# 通过占位的形式，完成拼接
name = "heima"
message = "hello: %s" % name
print(message)

# 通过占位的形式，完成数字和字符串的拼接
class_num = 57
avg_salary = 16781
message = "Python大数据学科，北京 %s 期，毕业平均工资: %s " % (class_num, avg_salary)
print(message)

name = "传智伯克"
setup_year = 1990
stock_price = 99.90
message = "%s, 成立于：%d, 今天的股价是：%f" % (name, setup_year, stock_price)
print(message)
