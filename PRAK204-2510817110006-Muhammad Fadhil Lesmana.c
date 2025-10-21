//Program menghitung: a - b * i / j - x + y
#include <stdio.h>

int main(){
    float a, b, i, j, x, y;
    float hasil;

    printf("Masukkan 6 angka (a b i j x y): ");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    hasil = a - b * i / j - x + y;

    printf("Hasil: %.3f\n", hasil);
    return 0;
}
