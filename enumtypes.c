#include <stdio.h>

enum months {JAN = 1, FEB, MRT, APR, MAY, JUN,
             JUL, AUG, SEP, OCT, NOV, DEC};

int main() {
    printf("The value of JAN: %d\n", JAN);
    printf("The value of JAN + FEB: %d\n", JAN + FEB);
    printf("The value of DEC: %d\n", DEC);
}
