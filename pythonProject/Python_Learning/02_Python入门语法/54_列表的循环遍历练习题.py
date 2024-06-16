mylist = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# while 循环
def while_func():
    index = 0
    mylist2 = []
    while index < len(mylist):
        if(mylist[index] % 2 == 0):
            mylist2.append(mylist[index])
        index += 1
    print(f"mylist 中的偶数为：{mylist2}")

def for_func():
    index1 = 0
    mylist2 = []
    for element in mylist:
        if element % 2 == 0:
            mylist2.append(element)
    print(f"mylist 中的偶数为：{mylist2}")

while_func()
for_func()