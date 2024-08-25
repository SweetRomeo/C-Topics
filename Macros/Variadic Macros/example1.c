/*---------------------------------

---------------------------------*/
#include <stdio.h>

#define LOG(format, ...) printf("LOG: " format "\n", __VA_ARGS__)

int main() {
    LOG("Sayılar: %d, %d", 10, 20); // LOG: Sayılar: 10, 20
    return 0;
}