#include <stdio.h>


/*
write this loop from the function getline() without && and || operators
for (i = 0; i < maxline-1, (c = getchar()) != EOF && c != '\n'; ++i)
*/

int main(){
    int i, c, maxline;

    maxline = 10;
    i = 0;
    while (i < maxline - 1) {
        if ((c = getchar()) != '\n') {
            if (c != EOF) {
                ++i;
            }
            // not necessary but verbose
            else {
                printf("EOF encountered\n");
                break;
            }
        }
        // not necessary but verbose
        else {
            printf("Newline character encountered\n");
            break;
        }
    }
    // not necessary but verbose
    if (i == maxline - 1)
        printf("Maxline condition reached\n");
}