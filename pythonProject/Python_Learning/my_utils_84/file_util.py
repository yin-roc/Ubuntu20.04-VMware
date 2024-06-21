# def print_file_info(file_name):
#     try:
#         f = open(file_name, "r", encoding="UTF-8")
#         print(f"文件存在，读取的内容为：\n{f.read()}")
#     except:
#         print("文件不存在")
#     finally:
#         f.close()
#
#
# def append_to_file(filename, data):
#     f = open(filename, "a", encoding="UTF-8")
#     f.write(data)
#     f.close()
#
# if __name__ == '__main__':
#     # print_file_info("/home/yin-roc/1-Github/Ubuntu20.04-VMware/pythonProject/Python_Learning/02_Python入门语法/74_test.txt")
#     append_to_file("84_test.txt", "helloworld")

def print_file_info(file_name):
    """
    功能： 将指定路径的文件内容输出到控制台
    :param file_name: 即将读取文件的路径
    :return: None
    """
    f = None
    try:
        f = open(file_name, "r", encoding="UTF-8")
        content = f.read()
        print("文件内容如下：")
        print(content)
    except Exception as e:
        print(f"程序出现异常，原因是：{e}")
    finally:
        if f:
            f.close()

def append_to_file(filename, data):
    """
    功能：将指定的数据追加到指定的文件中
    :param filename: 指定文件的路径
    :param data: 指定的数据
    :return: None
    """
    f = open(filename, "a", encoding="UTF-8")
    f.write(data)
    f.write("\n")
    f.close()

if __name__ == '__main__':
    # print_file_info("84_test.txt")
    append_to_file("84_test.txt", "good")