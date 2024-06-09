# 规则1：内容限定，限定只能使用：中文、英文、数字、下划线，注意：不能以数字作为开头
# error
# 1_name = "张三"
# name_! = "张三"
name_ = "zhangsan"
_name = "zhangsan"
name_1 = "zhangsan"

# 规则2：大小写敏感
Itheima = "黑马"
itheima = "黑马"
print(Itheima)
print(itheima)

# 规则3：不可使用关键字
# error，错误的使用了关键字
# class = 1
# def = 1
Class = 1
Def = 1