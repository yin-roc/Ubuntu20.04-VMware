
def check(temper):
    if temper <= 37.5:
        print(f"温度为{temper}，请进.")
    else:
        print(f"温度为{temper}，请隔离.")

check(33.6)