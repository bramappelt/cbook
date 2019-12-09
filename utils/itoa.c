#include <stdio.h>
#define WORDLEN 100

// prototype
void itoa(int n, char s[]);

int main(void) {
    char s[WORDLEN];
    int a, b, c;
    
    a = -1234567;
    b = 19865330;
    c = 23498765;

    itoa(a, s);
    printf("%d\t\t%s\n", a, s);

    itoa(b, s);
    printf("%d\t\t%s\n", b, s);
        
    itoa(c, s);
    printf("%d\t\t%s\n", c, s);

    return 0;
}

/* convert n to characters in s */
void itoa(int n, char s[]){
    int i, j, sign, temp;

    // save if negative and switch n to positive
    if ((sign = n) < 0)
        n = -n;

    // this builds the reverse of the string
    i = 0;
    do
        s[i++] = n % 10 + '0';
    while ((n /= 10) > 0);

    if (sign < 0)
        s[i++] = '-';

    s[i--] = '\0';
    
    // reverse string (make use of incremented i var as length)
    for (j=0; j < i / 2; j++) {
        temp = s[j];
        s[j] = s[i-j];
        s[i-j] = temp;
    }
}
