"""
演示河南省疫情可视化地图开发
"""
import json
from pyecharts.charts import Map
from pyecharts.options import *

# 读取数据文件
f = open(
    "/home/yin-roc/1-Github/Ubuntu20.04-VMware/pythonProject/Python_Learning/02_Python入门语法/可视化案例数据/地图数据/疫情.txt",
    "r",
    encoding="UTF-8"
)
data = f.read()     # 全部数据

# 关闭文件
f.close()

# 取到河南省数据
# 将字符串json转换为python的字典
data_dict = json.loads(data)    # 基础数据字典
# 从字典中取出河南省的数据
cities_data = data_dict["areaTree"][0]["children"][3]["children"]

# 组装每个省份和确诊人数为元组，并各个省的数据都封装入列表内
data_list = []      # 绘图所需要的数据列表
for city_data in cities_data:
    city_name = city_data["name"] + "市"
    city_confirm = city_data["total"]["confirm"]    # 确诊人数
    # 给列表传参,传入一个元组,元组有两个元素
    data_list.append((city_name, city_confirm))

# 未出现济源市信息，手动添加
data_list.append(("济源市", 5))

print(data_list)

# 创建地图对象
map = Map()

# 添加数据
map.add("河南省疫情分布", data_list, "河南")

# 设置全局设置,定制分段的视觉映射
map.set_global_opts(
    title_opts=TitleOpts(title="河南省疫情地图"),
    visualmap_opts=VisualMapOpts(
        is_show=True,       # 是否显示
        is_piecewise=True,  # 是否分段
        pieces=[
            {"min": 1, "max": 99, "label": "1-99", "color": "#CCFFFF"},
            {"min": 100, "max": 999, "label": "100-999", "color": "#FFFF99"},
            {"min": 1000, "max": 4999, "label": "1000-4999", "color": "#FF9966"},
            {"min": 5000, "max": 9999, "label": "5000-9999", "color": "#FF6666"},
            {"min": 10000, "max": 99999, "label": "10000-99999", "color": "#CC3333"},
            {"min": 100000, "label": "100000+", "color": "#990033"},
        ]

    )
)

# 绘图
map.render("河南省地图.html")