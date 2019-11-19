#include <stdio.h>

#define IN 1    // inside a word
#define OUT 0   // outside a word

// print a horizontal histogram of the length of words of its input

int main(){
    int c, i, j, state;
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
    // print horizontal histogram of word lengths
    for (i = 0; i < 10; ++i){
        printf("%d\t", i + 1);
        for (j = 0; j < wordlen[i]; ++j){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
