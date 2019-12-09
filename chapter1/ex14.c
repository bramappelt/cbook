#include <stdio.h>

// return an histogram of the characters in its input

int main(){
    int c, i, j;
    int nchars[52 + 1];

    // initialize array
    for (i=0; i<53; ++i)
        nchars[i] = 0;

    // char counting
    while ((c = getchar()) != EOF){
        if (c >= 'A' && c <= 'Z')
            ++nchars[c - 'A'];
        else if (c >= 'a' && c <= 'z')
            ++nchars[c - 'a' + 26];
        else
            ++nchars[52];
    }

    // print horizontal histogram
    for (i=0; i<53; ++i){
        if (i < 26)
            printf("%c\t", i + 'A');
        else if (i >= 26 && i < 52)
            printf("%c\t", i + 'A' + ('a' - 'Z' - 1));
        else
            printf("#\t");

        for (j=0; j<nchars[i]; ++j){
            printf("#");
        }
        printf("\n");
    }
}
