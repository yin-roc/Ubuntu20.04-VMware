"""
演示 Socket 服务端开发
"""

import socket

# 创建 Socket 对象
socket_server = socket.socket()

# 绑定ip和端口
# socket_server.bind(host, port)
socket_server.bind(("localhost", 8888))

# 监听端口
# socket_server.listen(backlog)
socket_server.listen(1)
# listen 方法接受一个整数，表示接受的连接数量

# 等待客户端链接
# result: tuple = socket_server.accept()
# conn = result[0]        # 客户端和服务端的链接对象
# address = result[1]     # 客户端的地址信息
# 简便写法
conn, address = socket_server.accept()
# accept 方法返回的是二元元组（链接对象， 客户端地址信息）
# 可以通过 变量1, 变量2 = socket_server.accept() 的形式，直接接受二元元组内的两个元素
# accept() 方法是阻塞的方法，等待客户端的链接，如果没有连接，就卡在这一行不再向下执行了

print(f"接收到了客户端的链接，客户端信息是：{address}")

while True:
    # 接收客户端信息, 要使用客户端和服务端本次的链接对象，而非 socket_server 对象
    data = conn.recv(1024).decode("UTF-8")
    # recv 接收的参数是缓冲区大小：一般给 1024 即可
    # recv 方法的返回值是一个字节数组，也就是 bytes 对象，不是字符串，可以通过decode方法通过 UTF-8 编码，将字符数组转换为字符串对象
    print(f"客户端发来的消息是: {data}")
    # 发送回复消息
    msg = input("请输入你和客户端要回复的消息：")
    if msg == 'exit':
        break
    conn.send(msg.encode("UTF-8"))      # encode可以将字符串编码为字节数组对象

# 关闭链接
conn.close()
socket_server.close()