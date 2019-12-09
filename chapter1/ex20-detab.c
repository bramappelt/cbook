#include <stdio.h>

#define MAXLEN 1000     // maximum amount of chars in line
#define TABSTOP 8       // spaces to tabs ratio

void removetabs(char s[], char r[]);
int getline(char s[], int maxlen);

/* replace tabs by the proper amount of spaces */
int main() {
    int c;
    char line[MAXLEN];
    char result[MAXLEN];

    while ((c=getline(line, MAXLEN)) != 0) {
        removetabs(line, result);
        printf("%s", result);
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

/* replace tabs with proper amount of spaces */
void removetabs(char s[], char r[]) {
}