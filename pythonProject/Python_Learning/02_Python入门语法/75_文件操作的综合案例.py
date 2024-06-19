# 自写
f_r = open("75_bill.txt", "r", encoding="UTF-8")
f_w = open("75_bill.txt.bak", "a", encoding="UTF-8")

for line in f_r:
    str = line.strip().split(",")
    flag = True
    for element in str:
        if element == '测试':
            flag = False
    if flag == True:
        f_w.write(line)

f_r.close()
f_w.close()

# 视频方法：减少了复杂度，但是通用性不是很高
f_r = open("75_bill.txt", "r", encoding="UTF-8")
f_w = open("75_bill.txt.bak", "a", encoding="UTF-8")

for line in f_r:
    line = line.strip()
    if line.strip(",")[4] == "测试":
        continue
    f_w.write(line)
    f_w.write("\n")

f_r.close()
f_w.close()