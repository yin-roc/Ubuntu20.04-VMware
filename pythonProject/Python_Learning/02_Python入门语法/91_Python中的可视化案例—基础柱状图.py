"""
演示基础柱状图的开发
"""
from pyecharts.charts import Bar
from pyecharts.options import LabelOpts
# 使用 Bar 构建基础柱状图
bar = Bar()

# 添加 x 轴的数据
bar.add_xaxis(["中国", "美国", "英国"])

# 添加 y 轴的数据
# bar.add_yaxis("GDP", [30, 20, 10])
# 将数值标签从柱状图中间移到柱状图右侧
bar.add_yaxis("GDP", [30, 20, 10], label_opts=LabelOpts(position="right"))

# 反转 x 轴 和 y 轴
bar.reversal_axis()

# 绘图
bar.render("基础柱状图.html")