#include <stdio.h>

int main(){
    long detik;
    while (scanf("%ld", &detik) != EOF) {
        int hari = detik / 86400;         // 1 hari = 86400 detik
        int sisa = detik % 86400;
        int jam = sisa / 3600;            // 1 jam = 3600 detik
        sisa %= 3600;
        int menit = sisa / 60;            // 1 menit = 60 detik
        int detik_sisa = sisa % 60;

        if (hari > 0)
            printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik_sisa);
        else
            printf("%02d:%02d:%02d\n", jam, menit, detik_sisa);
    }
    return 0;
}
