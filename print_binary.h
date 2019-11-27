#include <stdio.h>
#include <math.h>

void dectobin(unsigned long int n, int bits);

/* convert decimal to binary representation */
void dectobin(unsigned long int n, int bits) {
    int i, div;
    char bin[bits + 1];

    for (i=bits - 1; i>=0; --i) {

        div = (int)pow(2, i);
        if (n / div) {
            n = n - div;
            bin[bits - i - 1] = '1';
        }
        else
            bin[bits - i - 1] = '0';
    }
    bin[bits] = '\0';
    printf("%s", bin);
}
