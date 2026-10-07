#include <stdio.h>
float main () {
float Mengelilingi_taman=5;
float Jarak_tempuh=14;
float phi=3.14;
float Keliling_putaran=Jarak_tempuh/Mengelilingi_taman;
float Jari_jari=Keliling_putaran/(2*phi);

printf("Diketahui :\n");
printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", Mengelilingi_taman);
printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n", Jarak_tempuh);
printf("\n");
printf("Jawaban :\n");
printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n",Jari_jari);
}