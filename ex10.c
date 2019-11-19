#include <stdio.h>

/* copy its input and return this as output. replace tabs,
   backspaces and backslashes with their visual representation */

int main(){
    int c;

    while ((c = getchar()) != EOF){
        if (c == '\t'){
            putchar('\\');
            putchar('t');
            continue;   // skip to the next charater (loop) like in Python
        }
        if (c == '\b'){
            putchar('\\');
            putchar('b');
            continue;
        }
        if (c == '\\'){
            putchar('\\');
            putchar('\\');
            continue;
        }
        putchar(c);
    }
}
