#include <stdio.h>

int main(){
    int c, i;

    i = 0;

    while ((c = getchar())  != EOF)
        ++i;

    printf("c = %d\n", c);
    printf("i = %d\n", i);
}