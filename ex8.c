#include <stdio.h>

// program that prints whitespace, tabs and newlines //
int main(){
    int c, nw, nt, nn;
    nw = nt = nn = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' '){
            ++nw;
        }
        else if (c == '\t'){
            ++nt;
        }
        else if (c == '\n'){
            ++nn;
        }
    }
    printf("Spaces: %d\nTabs: %d\nNewlines: %d\n", nw, nt, nn);
}