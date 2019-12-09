#include <stdio.h>

#define IN 1
#define OUT 0

// takes input and prints each word on a new line
int main(){
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t')
            putchar('\n');
        else
            putchar(c);
    }
}
