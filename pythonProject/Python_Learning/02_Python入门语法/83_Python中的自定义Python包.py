"""
演示 Python 的包
"""

# 创建一个包
# 导入自定义的包中的模块，并使用
# import my_package_83.my_module1_83
# import my_package_83.my_module2_83
#
# my_package_83.my_module1_83.info_print1()
# my_package_83.my_module2_83.info_print2()

# from my_package_83 import my_module1_83
# from my_package_83 import my_module2_83
#
# my_module1_83.info_print1()
# my_module2_83.info_print2()

# from my_package_83.my_module1_83 import info_print1
# from my_package_83.my_module2_83 import info_print2
# info_print1()
# info_print2()

# 通过 __all__ 变量，控制 import*
from my_package_83 import *
my_module1_83.info_print1()

# error，__init__.py 文件中设置了 __all__ 只导入：my_module1_83，因此 my_module2_83 不管用
# my_module2_83.info_print2()
