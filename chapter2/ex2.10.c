#include <stdio.h>

// prototype
int lower_self(int c);


int main(void) {
    int a, b, c;
    int r;

    a = 'A';
    b = 'C';
    c = 'z';

    r = lower_self(a);
    printf("%c becomes %c\n", a, r);

    r = lower_self(b);
    printf("%c becomes %c\n", b, r);
    
    r = lower_self(c);
    printf("%c becomes %c\n", c, r);

    return 0;
}

/* implement lower function with conditional expression instead of if-else */
int lower_self(int c) {
    return c >= 'A' && c <= 'Z' ? c += 'a' - 'A' : c;
}
