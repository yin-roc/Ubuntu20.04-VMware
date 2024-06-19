# 自写
f = open("72_word.txt", "r", encoding="UTF-8")
count = 0
for lines in f:
    eachline = lines.replace("\n", "").split(" ")
    i = 0
    print(eachline)
    while i < len(eachline):
        if eachline[i] == "itheima":
            count += 1
        i += 1
print(f"itheima 单词出现的次数:{count}")
f.close()

# 方式1:读取全部内容,以读取模式打开
f = open("72_word.txt", "r", encoding="UTF-8")
content = f.read()
count = content.count("itheima")
print(f"itheima 单词出现的次数:{count}")

# 方式2:读取内容,一行一行读取
count = 0
f = open("72_word.txt", "r", encoding="UTF-8")
for line in f:
    line = line.strip()     # 去除开头和结尾的空格及换行符
    words = line.split(" ")

# 判断单词出现次数并累计
for word in words:
    if word == "itheima":
        count += 1
print(f"itheima 单词出现的次数:{count}")
# 关闭文件
f.close()