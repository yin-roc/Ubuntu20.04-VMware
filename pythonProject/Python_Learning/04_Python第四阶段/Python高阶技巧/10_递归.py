"""
演示 Python 的操作
需求：通过递归，找出一个指定文件夹内的全部文件

思考：写一个函数，列出文件夹的全部内容，如果是文件就收集到 list
如果是文件夹，就递归调用自己，再次判断
"""
import os

def Test_os():
    """演示 os 模块的 3个基础方法"""
    # 列出文件下的内容  (给出一个文件夹内的所有文件和文件夹)
    print(os.listdir("/home/yin-roc/test"))
    # 判断指定路径是否是文件夹  (判断所给的路径是否是一个文件夹，是则返回 True，否则返回 False)
    print(os.path.isdir("/home/yin-roc/test"))
    # 判断指定路径是否存在    (判断一个路径是否存在,是则返回 True，否则返回 False)
    print(os.path.exists("/home/yin-roc/test"))

def get_files_recursion_from_dir(path):
    """
    从指定的文件夹中使用递归模式，获取全部的文件列表
    :param path: 被判断的文件夹
    :return: 包含全部的文件，如果目录不存在或者无文件就返回一个list
    """
    print(f"当前判断的文件夹是: {path}")
    file_list = []
    if os.path.exists(path):
        for f in os.listdir(path):
            new_path = path + "/" + f
            if os.path.isdir(new_path):
                # 进入到这里，表明这个目录是文件夹不是文件
                file_list += get_files_recursion_from_dir(new_path)
            else:
                file_list.append(new_path)
    else:
        print(f"指定的目录{path}, 不存在")
        return []

    return file_list


if __name__ == '__main__':
    # Test_os()
    print(get_files_recursion_from_dir("/home/yin-roc/test"))