/*---------------------------------

---------------------------------*/
#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int x = 10, y = 20;
    printf("Minimum: %d\n", MIN(x, y)); // Minimum: 10
    return 0;
}
