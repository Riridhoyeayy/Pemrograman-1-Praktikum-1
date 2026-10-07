#include <stdio.h>
int main () {
    int Panjang_sisi1=4;
    int Panjang_sisi2=5;
    int Panjang_sisi3=7;
    int Keliling_tanah=Panjang_sisi1+Panjang_sisi2+Panjang_sisi3;
    int Harga_permeter=85000;
    int Biaya_total=Keliling_tanah*Harga_permeter;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n",Panjang_sisi1, Panjang_sisi2, Panjang_sisi3);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", Keliling_tanah);
    printf("Harga tanah Per Meter adalah %d\n", Harga_permeter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", Biaya_total);
}