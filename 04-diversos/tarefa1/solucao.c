#include <stdlib.h>

typedef struct {
    int n;
    unsigned char *digits;
} BigInt;

BigInt *bigint_new(int n) {
    BigInt *b = malloc(sizeof(BigInt));
    b->digits = malloc(sizeof(unsigned char) * n);
    b->n = n;
    for (int i = 0; i < n; i++) b->digits[i] = 0;
    return b;
}

void bigint_free(BigInt *b) {
    free(b->digits);
    free(b);
}

BigInt *bigint_sum(BigInt *a, BigInt *b) {
    return bigint_new(0);
}