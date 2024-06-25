"""
面向对象，数据分析案例，主业务逻辑代码
实现步骤：
1.设计一个类，可以完成数据的封装
2.设计一个抽象类，定义文件读取的相关功能，并使用子类实现具体的功能
3.读取文件，生产数据对象
4.进行数据需求的逻辑计算（计算每一天的销售额）
5.通过 PyEcharts 进行图形绘制
"""

from file_define_108 import FileReader, TextFileReader, JsonFileReader
from data_define_108 import Record
from typing import List
from pyecharts.charts import Bar
from pyecharts.options import *
from pyecharts.globals import ThemeType

text_file_reader = TextFileReader("/home/yin-roc/1-Github/Ubuntu20.04-VMware/pythonProject/Python_Learning/03_Python第三阶段/数据分析案例/2011年1月销售数据.txt")
json_file_reader = JsonFileReader("/home/yin-roc/1-Github/Ubuntu20.04-VMware/pythonProject/Python_Learning/03_Python第三阶段/数据分析案例/2011年2月销售数据JSON.txt")

jan_data: List[Record] = text_file_reader.read_data()
feb_data: List[Record] = json_file_reader.read_data()

# 将 2 个月份的数据合并为 1 个 list 来存储
all_data: List[Record] = jan_data + feb_data

# 开始进行数据计算
# {"2011-01-01": 1534, "2011-01-02": 300, "2011-01-03": 650}
data_dict = {}
for record in all_data:
    if record.date in data_dict.keys():
        # 当前日期已经有记录了，所以和老记录做累加即可
        data_dict[record.date] += record.money
    else:
        data_dict[record.date] = record.money

# print(data_dict)

# 可视化开发
bar = Bar(init_opts=InitOpts(theme=ThemeType.LIGHT))
bar.add_xaxis(list(data_dict.keys()))           # 添加 x 轴的数据
bar.add_yaxis("销售额", list(data_dict.values()), label_opts=LabelOpts(is_show=False))  # 添加了 y 轴数据
bar.set_global_opts(
    title_opts=TitleOpts(title="每日销售额")
)

bar.render("每日销售额柱状图.html")
