import math
Alas=5
Tinggi=12
Sisi_A=Tinggi
Sisi_B=math.sqrt(Alas**2 + Tinggi**2)
Sisi_C=Alas
Keliling=Sisi_A + Sisi_B + Sisi_C
Luas=(Sisi_C*Sisi_A)/2

print("Diketahui :")
print("Alas = %d cm"%(Sisi_C))
print("Tinggi = %d cm"%(Sisi_A))
print("")
print("Jawab :")
print("Sisi A = %d cm"%(Sisi_A))
print("Sisi B = %d cm"%(Sisi_B))
print("Sisi C = %d cm"%(Sisi_C))
print("Keliiling = %d cm"%(Keliling))
print("Luas = %d cm"%(Luas))