second = int(input("detik : "))

day = second // 86400
rest = second % 86400

hour = rest // 3600
rest = rest % 3600

minute = rest // 60
second = rest % 60

if day > 0:
    print(f"{day} hari {hour:02d}:{minute:02d}:{second:02d}")
else:
    print(f"{hour:02d}:{minute:02d}:{second:02d}")