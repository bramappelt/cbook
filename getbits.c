#include <stdio.h>

unsigned getbits(unsigned int x, int p, int n);


int main() {
    unsigned int x;
    int p, n;

    x = 155;
    p = 4;
    n = 3;

    x = getbits(x, p, n);
    printf("%u", x);

    return 0;
}

/* get n bits from position p (zero-indexed) */
unsigned getbits(unsigned int x, int p, int n) {
    return (x >> (p + 1 - n)) & ~(~0 << n);
}
