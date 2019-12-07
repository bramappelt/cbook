#include <stdio.h>

// symbolic constant
#define WORDLEN 100

// macro
#define abs(x) ((x) < 0 ? -(x) : (x))

// prototype
void itoa(int n, char s[], int width);

int main(void) {
    char s[WORDLEN];
    int a, b, width;
    
    /* value is not represented correctly its opposite value falls outside of
       the representable integer range by one. A solution is to not negate the
       integer but directly building the string handling negatives if present.*/
    width = 12;
    a = -2147483648;
    b = 2147483647;

    itoa(a, s, width);
    printf("%s\n", s);

    itoa(b, s, width);
    printf("%s\n", s);

    a = 345;
    b = 4;

    itoa(a, s, width);
    printf("%s\n", s);

    itoa(b, s, width);
    printf("%s\n", s);

    return 0;
}

/* convert n to characters in s with a minumum
   left padding of width */
void itoa(int n, char s[], int width){
    int i, j, sign, temp;

    // save sign
    sign = n;

    // this builds the reverse of the string
    i = 0;
    do
        s[i++] = abs(n % 10) + '0'; // absolute value of the remainder, avoids inverting integer
    while ((n /= 10) != 0);         // not exactly equal to 0

    if (sign < 0)
        s[i++] = '-';

    // left padding
    while (width - i > 0)
        s[i++] = ' ';

    s[i--] = '\0';
    
    // reverse string (make use of incremented i var as length)
    for (j=0; j < i / 2; j++) {
        temp = s[j];
        s[j] = s[i-j];
        s[i-j] = temp;
    }
}
