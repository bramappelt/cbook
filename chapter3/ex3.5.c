#include <stdio.h>
#include <math.h>

void itob(int n, char s[], int b);

int main(){
    int n, b;
    char s[100];

    n = 30;
    for (b = 2; b != 30; b++) {
        itob(n, s, b);
        printf("%d in base %d is %s\n", n, b, s);
    }
    return 0;
}

/* converts integer n into a base b character representation
   in the string s */
void itob(int n, char s[], int b) {
    int i, c, p;
    
    i = 0;

    // binary indicator
    if (b == 2)
        s[i++] = '0', s[i++] = 'b';

    // octal indicator
    if (b == 8)
        s[i++] = '0', s[i++] = 'o';

    // hex indicator
    if (b == 16)
        s[i++] = '0', s[i++] = 'x';
    
    // find max power, handles n = 0
    p = (n > 0) ? (int)floor(log(n) / log(b)) : 0;

    // at least one loop is needed
    do {
        c = n / (int)(pow(b, p));
        if (c > 9)
            s[i++] = (c - 10) + 'A';
        else
            s[i++] = (c + '0');
        n = n - c * (int)pow(b, p--);
    }
    while (p >= 0);

    s[i] = '\0';
}
