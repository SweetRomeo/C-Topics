/*---------------------------------

---------------------------------*/
#include <stdio.h>

#define TOPLA_VARYADIK(...) toplam(__VA_ARGS__)

int toplam(int a, int b, int c) {
    return a + b + c;
}

int main() {
    printf("Toplam: %d\n", TOPLA_VARYADIK(1, 2, 3)); // Toplam: 6
    return 0;
}
