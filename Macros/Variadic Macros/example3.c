/*---------------------------------

---------------------------------*/
#include <stdio.h>

#define DEBUG_LOG(fmt, ...) printf("DEBUG: " fmt "\n", ##__VA_ARGS__)

int main() {
    DEBUG_LOG("Bu bir test mesajıdır."); // DEBUG: Bu bir test mesajıdır.
    DEBUG_LOG("Değer: %d", 42); // DEBUG: Değer: 42
    return 0;
}
