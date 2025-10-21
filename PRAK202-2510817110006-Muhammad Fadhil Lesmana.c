#include <stdio.h>

int main(){
    float nilai1, nilai2, hasil;

    //Input
    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai1);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nilai2);

    //Proses
    hasil = nilai1 + nilai2;

    //Output
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"\n", nilai1, nilai2, hasil);
    return 0;
}
