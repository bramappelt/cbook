#include <stdio.h>

/* copy its input to its output and replace two or more
   occuring whitespaces in sequence with a single whitespace */

int main(){
    int c;
    int whitespace_value;
    char* whitespace_char; // * removes error, reason unclear

    whitespace_char = " ";
    whitespace_value = ' ';

    while ((c = getchar()) != EOF) {
        if (c == whitespace_value){
            // skip all leading whitespaces and return only one
            while ((c = getchar()) == whitespace_value)
                ;
            printf("%c", whitespace_char);
        }
        printf("%c", c);
    }
}