#include <stdio.h>
#define MAXLINE 1000 // maximum chars in a line


int getline(char s[], int maxline);
void reverse(char s[], int linelen);


/* reverse the input lines */
int main(void) {
    int c, linelength;
    char line[MAXLINE];

    while ((c = getline(line, MAXLINE)) != 0) {
        reverse(line, c);
        printf("%s", line);
    }
    return 0;
}

int getline(char s[], int maxline) {
    int c, i;
    for (i = 0; i < maxline-1, (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(char s[], int linelen) {
    int i, temp;

    for (i=0; i < (linelen - 1) / 2; i++) {
        temp = s[i];
        s[i] = s[linelen -2 - i];
        s[linelen -2 - i] = temp;
    }
    
}
