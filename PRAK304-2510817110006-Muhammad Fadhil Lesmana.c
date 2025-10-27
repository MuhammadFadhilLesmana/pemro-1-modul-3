#include <stdio.h>

int main() {
    int n;
    // Membaca input sampai EOF
    while (scanf("%d", &n) != EOF) {
        if (n < 0) {
            printf("Anda Menginput Melebihi Limit Bilangan\n");
        } else if (n == 0) {
            printf("Nol\n");
        } else if (n > 99) {
            printf("Anda Menginput Melebihi Limit Bilangan\n");
        } else if (n < 10) {
            printf("Satuan\n");
        } else if (n < 20) {
            printf("Belasan\n");
        } else if (n < 100) {
            printf("Puluhan\n");
        }
    }
    return 0;
}
