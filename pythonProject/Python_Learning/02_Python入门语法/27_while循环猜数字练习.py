import random
num = random.randint(1, 100)
count = 1
guess_num = int(input("请输入要猜测的数字: "))
while guess_num != num:
    if guess_num > num:
        print("输入的数大了")
    elif guess_num < num:
        print("输入的数小了")
    count += 1
    guess_num = int(input("请重新输入要猜测的数字: "))
print(f"一共猜了 {count} 次")
