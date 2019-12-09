#include <stdio.h>

#define IN 1    // inside a word
#define OUT 0   // outside a word

// print a vertical histogram of the length of words of its input

int main(){
    int c, i, j, state, stopcounter;
    int wordlen[10];

    // initialize array!
    for (i = 0; i < 10; ++i)
        wordlen[i] = 0;

    state = IN;
    i = 0;
    while ((c = getchar()) != EOF){
        // set state to out when any word break is encountered
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
         // number of chars in word between 0 and 10
        if (state == OUT && i > 0 && i < 10){
            state = IN;
            ++wordlen[i - 1];
            i = 0;
        }
        // if word has more than 9 chars
        else if (state == OUT && i >= 10) {
            state = IN;
            ++wordlen[9];
            i = 0;
        }
        // increment counter if within word
        else 
            ++i;
    }
    // print vertical histogram of word lengths
    // header line
    for (i=0; i < 10; ++i){
        printf("%d  ", i + 1);
    }
    printf("\n");
    
    // horizontal bars
    for (i=0; i < 10; ++i){
        printf("---");
    }
    printf("\n");

    // data bars
    i = 0;
    stopcounter = 0;
    while (stopcounter != 10) {
        stopcounter = 0;
        for (j=0; j<10; ++j){
            if (wordlen[j] > i)
                printf("x  ");
            else {
                printf("   ");
                ++stopcounter;
            }
        }
        printf("\n");
        ++i;
    }
}
