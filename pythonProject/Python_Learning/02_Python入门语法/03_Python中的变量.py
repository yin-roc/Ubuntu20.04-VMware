"""
本代码演示了：
- Python中变量的相关操作
"""

# 定义了一个变量，用来记录钱包余额
money = 50
# 通过 print 语句，输出变量记录的内容
print("钱包还有：", money)

# 买了一个冰淇淋，花费10元
money = money - 10
print("买了冰淇淋花费10元，还剩余：", money, "元")

# 假设，每隔一小时，输出一下钱包的余额
# ctrl+d 快速复制
print("现在是下午1点，钱包余额剩余:", money)
print("现在是下午2点，钱包余额剩余:", money)
print("现在是下午3点，钱包余额剩余:", money)
print("现在是下午4点，钱包余额剩余:", money)