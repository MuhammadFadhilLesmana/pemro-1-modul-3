#include <stdio.h>

int main() {
    int N;
    // Membaca input sampai habis (EOF)
    while (scanf("%d", &N) != EOF) {
        if (N > 0)
            printf("positif\n");
        else if (N < 0)
            printf("negatif\n");
        else
            printf("nol\n");
    }
    return 0;
}
