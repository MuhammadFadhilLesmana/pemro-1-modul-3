#Program menghitung: a - b * i / j - x + y

def hitung_ekspresi(a, b, i, j, x, y):
    hasil = a - b * i / j - x + y
    return round(hasil, 3)

#Input dari user
data = input("Masukkan 6 angka (a b i j x y): ").split()
a, b, i, j, x, y = map(float, data)

hasil = hitung_ekspresi(a, b, i, j, x, y)
print(f"Hasil: {hasil:.3f}")
