import my_utils_84.str_util
from my_utils_84 import file_util

print(my_utils_84.str_util.str_reverse("黑马程序员"))
print(my_utils_84.str_util.substr("itheima", 0, 4))

file_util.append_to_file("84_test.txt", "itheima")
file_util.print_file_info("84_test.txt")