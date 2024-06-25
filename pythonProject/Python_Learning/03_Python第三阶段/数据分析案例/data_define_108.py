"""
数据定义的类
"""

class Record:
    date = None
    order_id = None
    money = None
    province = None

    def __init__(self, m_date, m_order_id, m_money, m_province):
        self.date = m_date              # 日期
        self.order_id = m_order_id      # 订单号
        self.money = m_money            # 金额
        self.province = m_province      # 省份

    def __str__(self):
        return f"{self.date}, {self.order_id}, {self.money}, {self.province}"
