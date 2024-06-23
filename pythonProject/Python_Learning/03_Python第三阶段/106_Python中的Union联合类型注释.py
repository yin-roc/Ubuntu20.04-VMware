"""
演示 Union联合类型注释
"""

# 使用 Union类型，必须先导包
from typing import Union

my_list : list[Union[int, str]] = [1, 2, "itheima", "itcast"]

def func(data: Union[int, str]) -> Union[int, str]:
    pass

func()