# num = int(input("请输入第一次猜想的数字： "))
# if num == 10:
#     print("猜对辣")
# else:
#     num_1 = int(input("不对，再猜一次： "))
#     if num_1 == 10:
#         print("猜对辣")
#     else:
#         num_2 = int(input("不对，再猜最后一次： "))
#         if num_2 == 10:
#             print("猜对辣")
#         else:
#             print("Sorry,全部猜错拉，我想的是：10")

num = int(input("请输入第一次猜想的数字： "))
if int(input("请输入第一次猜想的数字： ")) == 10:
    print("恭喜第一次猜对辣")
elif int(input("不对，再猜一次： ")) == 10:
    print("猜对辣")
elif int(input("不对，再猜最后一次： ")) == 10:
    print("猜对辣")
else:
    print("Sorry,全部猜错拉，我想的是：10")
