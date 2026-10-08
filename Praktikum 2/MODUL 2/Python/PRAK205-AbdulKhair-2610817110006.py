import math

a = float(input("Nilai a : "))
b = float(input("Nilai b : "))

alas = math.sqrt(b ** 2 - a ** 2)
tinggi = a
hypotenusa = b

keliling = alas + tinggi + hypotenusa
luas = 0.5 * alas * tinggi

print(f"\nAlas : {alas:.0f} cm")
print(f"Tinggi : {tinggi:.0f} cm")
print(f"Keliling : {keliling:.0f} cm")
print(f"Luas : {luas:.0f} cm^2")