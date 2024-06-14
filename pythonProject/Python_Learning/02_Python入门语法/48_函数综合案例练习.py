money = 5000000
name = input("请输入名称: ")

def check_balance():
    print("--------查询余额--------")
    print(f"{name}，你好，您的余额剩余: {money}元")

def deposit(m_money):
    print("-------- 存款 --------")
    global money
    money += m_money
    print(f"{name}，你好，您存款{m_money}元成功")
    print(f"{name}，你好，您的余额剩余: {money}元")

def withdraw(m_money):
    print("-------- 取款 --------")
    global money
    money -= m_money
    print(f"{name}，你好，您取款{m_money}元成功")
    print(f"{name}，你好，您的余额剩余: {money}元")

while name == "zhoujielun":
    print("--------主 菜单--------")
    print("查询余额 【输入1】")
    print("存款    【输入2】")
    print("取款    【输入3】")
    print("退出    【输入4】")
    choice = int(input("请输入你的选择: "))
    num = 0
    if(choice == 1):
        check_balance()
    elif(choice == 2):
        num = int(input("请输入存款的金额："))
        deposit(num)
    elif(choice == 3):
        num = int(input("请输入取款的金额："))
        withdraw(num)
    elif(choice == 4):
        break
    else:
        print("输入错误，请重新输入！")
        continue
