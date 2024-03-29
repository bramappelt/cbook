#include <stdio.h>

#define IN 1    // inside a word
#define OUT 0  // outside a word

// count words, characters and lines
int main(){
    int c, nl, nw, nc, state;

    nw = nl = nc = 0;
    state = OUT;
    while ((c = getchar()) != EOF){
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("\nlines: %d\nwords: %d\ncharacters: %d\n", nl, nw, nc);
}
