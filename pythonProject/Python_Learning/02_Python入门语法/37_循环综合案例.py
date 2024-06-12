import random
num = random.randint(1, 10)
sum = 10000
for i in range(1, 21):
    salary = 1000;
    num = random.randint(1, 10)
    if(num < 5):
        print(f"员工{i}，绩效分{num}，低于5，不发工资，下一位")
        continue
    elif num >= 5:
        sum -= 1000
        if(sum > 0):
            print(f"员工{i}发放工资1000元")
        else:
            print("余额不足")
            break