# 方式1：使用 print 直接输出类型信息
print(type("heimachengxuyuan"))
print(type(666))
print(type(13.14))

# 方式2：使用变量存储 type() 语句的结果
string_type = type("heimachengxuyuan")
int_type = type(666)
float_type = type(13.14)
print(string_type)
print(int_type)
print(float_type)

# 方法3：使用 type() 语句，查看变量中存储的数据类型信息
name = "heimachengxuyuan"
name_type = type(name)
print(name_type)