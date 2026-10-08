radius = float(input("jari-jari : "))
height = float(input("tinggi : "))

volume = 22 / 7 * radius ** 2 * height
area = 2 * 22 / 7 * radius * (radius + height)
circumference = 2 * 22 / 7 * radius

print(f"\nVolume : {volume:.2f}")
print(f"Luas : {area:.2f}")
print(f"Keliling : {circumference:.2f}")