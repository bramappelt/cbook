#include <stdio.h>
#include "print_binary.h"

unsigned long setbits(unsigned long int x, int p, int n, unsigned long int y);

int main(void) {
    unsigned long int x, y, z;
    int p, n;

    x = 23;
    y = 28;
    p = 4;
    n = 3;

    z = setbits(x, p, n, y);

    printf("x = %u:\t", x);
    dectobin(x, 8);
    printf("\ny = %u:\t", y);
    dectobin(y, 8);
    printf("\nz = %u:\t", z);
    dectobin(z, 8);
    printf("\n");
}

/* returns x with the n bits that begin at position p set to the
   rightmost n bits of y, leaving the other bits unchanged */
unsigned long setbits(unsigned long int x, int p, int n, unsigned long int y) {
    // this is wrong but question is unclear imo
    return x & ~(~(~0 << n) << (p + 1 - n)) | (y & ~(~0 << n)) << (p + 1 - n);
}
