#include <stdio.h>
#include "print_binary.h"
#include <limits.h>
#include <math.h>

int bitlength(void);
unsigned long int rightrot(unsigned long int x, int n);

int main(void) {
    unsigned long int x, y;
    int n;

    x = 170;
    n = 1;

    y = rightrot(x, n);

    printf("x = %u:\t", x);
    dectobin(x, 8);
    printf("\ny = %u:\t\t", y);
    dectobin(y, 8);

    return 0;
}

/* rotate x, n positions to the right */
unsigned long rightrot(unsigned long x, int n) {
    int i;

    // NOTE: both nb & ul can be used just a different calculation of the same thing
    int nb = bitlength();                   // iteratively
    int ul = floor(log2(ULONG_MAX)) + 1;    // calculated from max value of type
    
    while (n-- > 0) {
        i = (x & 1) << (ul - 1); // create a copy and shift to left
        x = x >> 1;              // shift to right 1 pos
        x = x | i;               // merge
    }
    return x;
}

/* number of bits for unsigned long int calculated iteratively */
int bitlength(void) {
    int i;
    unsigned long l = (unsigned long) ~0;

    for (i=1; (l = l >> 1) > 0; i++)
        ;
    return i;
}