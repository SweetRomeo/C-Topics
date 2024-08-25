/*---------------------------------
Aşağıdaki örnekte function macro ile ilgili
bir örnek verilmiştir. Burada basit bir toplam
fonksiyonel makrosu örneği verilmiştir.
---------------------------------*/
#include <stdio.h>

#define TOPLA(x, y) ((x) + (y))

int main() {
    int a = 5, b = 3;
    printf("Sonuç: %d\n", TOPLA(a, b));
    return 0;
}