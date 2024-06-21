# # 自写
# def str_reverse(s):
#     str = ""
#     for element in s:
#         str = element + str
#     return str
#
# def substr(s, x, y):
#     str1 = ""
#     str2 = ""
#     str3 = ""
#     list = []
#     i = 0
#     if x > y:
#         tmp = x
#         x = y
#         y = tmp
#     while i < x:
#         str1 += s[i]
#         i += 1
#     list.append(str1)
#     while i < y:
#         str2 += s[i]
#         i += 1
#     list.append(str2)
#     while i < len(s):
#         str3 += s[i]
#         i += 1
#     list.append(str3)
#     return list
#
#
# if __name__ == '__main__':
#     # print(f"{str_reverse('  hello world  ')}")
#     print(f"{substr('helloworld', 1, 3)}")

# 视频写法
def str_reverse(s):
    """
    功能：反转字符串
    :param s: 将被反转的字符串
    :return: 反转后的字符串
    """
    return s[::-1]

def substr(s, x, y):
    """
    功能：按照给定的下标完成字符串的切片
    :param s: 即将被切片的字符串
    :param x: 切片的开始下标
    :param y: 切片的结束下标
    :return: 切片完成后的字符串
    """
    return s[x:y]

if __name__ == '__main__':
    print(str_reverse("黑马程序员"))
    print(substr("黑马程序员", 1, 3))
