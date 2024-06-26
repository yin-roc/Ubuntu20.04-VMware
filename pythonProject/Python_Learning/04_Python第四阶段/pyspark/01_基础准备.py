"""
演示： 获取PySpark的执行环境入库对象：SparkContext
并通过 SparkContext 对象获取当前 PySpark 的版本
"""

# 导包
from pyspark import SparkConf, SparkContext

# 创建 SparkConf 类对象
conf = SparkConf().setMaster("local[*]").setAppName("test_spark_app")   # 链式调用

"""
conf = SparkConf()
conf.setMaster("localp[*]")         # 返回值是 SparkConf 对象
conf.setAppName("test_spark_app")   # 返回值是 SparkConf 对象
"""

# 基于 SparkConf 类对象创建 SparkContext 对象
sc = SparkContext(conf=conf)

# 打印 PySpark 的运行版本
print(sc.version)

# 停止 SparkContext 对象的运行（停止 PySpark 程序）
sc.stop()
