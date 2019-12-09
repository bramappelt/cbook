#include <stdio.h>

#define MAXLEN 1000

long long atoi_self(char s[]);
int getline(char s[], int maxlen);

/* take a string of digits, return the integer */
int main() {
    int c;
    char line[MAXLEN];

    while ((c = getline(line, MAXLEN)) != 0)
        printf("%lld\n", atoi_self(line));
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

/* convert string of digits to integer */
long long atoi_self(char s[]) {
    int i;
    long long n;

    n = 0;
    for (i=0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}
