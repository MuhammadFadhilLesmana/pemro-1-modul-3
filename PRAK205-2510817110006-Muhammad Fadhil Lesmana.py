import math

#Input
r = float(input())
t = float(input())

#Perhitungan
volume = math.pi * r * r * t
luas = 2 * math.pi * r * (r + t)
keliling = 2 * math.pi * r

#Output dengan 2 angka di belakang koma
print("Volume = {:.2f}".format(volume))
print("Luas = {:.2f}".format(luas))
print("Keliling = {:.2f}".format(keliling))
