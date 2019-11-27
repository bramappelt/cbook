#include <stdio.h>
#include "print_binary.h"

unsigned long invert(unsigned long x, int p, int n);

int main(void) {
    unsigned long int x, y;
    int p, n;

    x = 170;
    p = 7;
    n = 8;

    y = invert(x, p, n);

    printf("x = %u:\t", x);
    dectobin(x, 8);
    printf("\ny = %u:\t\t", y);
    dectobin(y, 8);

    return 0;
}

/* return x with the n bits that begin at p inverted, leave others unchanged */
unsigned long invert(unsigned long x, int p, int n) {
    return x ^ (~(~0 << n) << (p + 1 - n));
}
