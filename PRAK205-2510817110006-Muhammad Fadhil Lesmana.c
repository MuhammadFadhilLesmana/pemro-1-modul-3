#include <stdio.h>

#define PI 3.14159265358979323846

int main() {
    float r, t;
    
    //Input
    scanf("%f", &r);
    scanf("%f", &t);
    
    //Perhitungan
    float volume = PI * r * r * t;
    float luas = 2 * PI * r * (r + t);
    float keliling = 2 * PI * r;

    //Output dengan 2 angka di belakang koma
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);
    return 0;
}
