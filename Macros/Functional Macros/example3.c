/*---------------------------------
  Aşağıdaki örnekte kendisine göderilen sayının
  karesini alan bir fonksiyonel macro gösterilmiştir.
---------------------------------*/
#include <stdio.h>

#define KARESI(x) ((x) * (x))

int main() {
    int num = 4;
    printf("Karesi: %d\n", KARESI(num)); // Karesi: 16
    return 0;
}
