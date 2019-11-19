#include <stdio.h>
#define MAXLEN 1000     // maximum char in a line

int getline(char s[], int maxlen);
void delwhitespace(char s[]);

/* remove trailing white space and entirely blank lines */
int main() {
    int c;
    char line[MAXLEN];

    while ((c=getline(line, MAXLEN)) != 0) {
        delwhitespace(line);
        printf("%s", line);
    }
    return 0;
}

/* get line from input and return its length */
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

/* delete trailing white space or empty lines */
void delwhitespace(char s[]) {
    int i, c, si;

    i = c = 0;
    while ((si = s[i]) != '\n') {
        // if white space increment counter
        if (si == ' ' || si == '\t') {
            ++i;
            ++c;
        }
        // reset counter when non-white space char
        else {
            ++i;
            c = 0;
        }
    }
    s[i - c] = si;
    s[i - c + 1] = '\0';
}

