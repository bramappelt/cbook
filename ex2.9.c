#include <stdio.h>
#include "print_binary.h"
#include <math.h>

int bitcount(unsigned x);
int bitcount2(unsigned x);

int main(void){
    unsigned x = 34;
    
    // bitcount
    printf("%u:\t", x);
    dectobin(x, floor(log2(x)) + 1); // significant bits only
    printf("\t(%d)\n", bitcount(x));

    // bitcount 2
    printf("%u:\t", x);
    dectobin(x, floor(log2(x)) + 1); // significant bits only
    printf("\t(%d)\n", bitcount2(x));
    return 0;
}

/* count set bits in x */
int bitcount(unsigned x){
    int b;
    for (b = 0 ; x != 0 ; x >>= 1)
        if (x & 01)
            b++;
    return b;
}

/* faster version of bitcount()
   All bits below the least significant set bit are masked off */
int bitcount2(unsigned x){
    int b;
    for (b=0 ; x != 0 ; x &= (x - 1))
        ++b;
    return ;
}
