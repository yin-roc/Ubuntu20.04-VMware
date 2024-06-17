# 方法1
mystr1 = "万过薪月，员序程马黑来，nohtyP学"
mystr2 = mystr1[::-1]
print(mystr2)
mystr3 = mystr2.split("，")
print(mystr3)
mystr4 = mystr3[1]
print(mystr4)
result = mystr4[1::1]
print(result)

# 方法2：
mystr1 = "万过薪月，员序程马黑来，nohtyP学"
result2 = mystr1.split("，")[1].replace("来","")[::-1]
print(result2)
