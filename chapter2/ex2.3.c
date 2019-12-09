#include <stdio.h>

#define MAXLINE 1000

long long int hextoi(char s[]);
int getline(char s[], int maxlen);


int main() {
    int c;
    char hex[MAXLINE];
    long long int r;

    while ((c = getline(hex, MAXLINE)) != 0) {
        r = hextoi(hex);
        printf("%lld\t", r);
        printf("%s", hex);
    }
}


// convert string of hex values to integer
long long int hextoi(char s[]) {
    int i, si, sii;
    int int_value;
    long long int n;

    n = 0;
    i = 0;
    while (1) {
        si = s[i];
        sii = s[i+1];
        if (si == '0' && sii == 'x' || sii == 'X') {
            i = i + 2;
            continue;
        }
        else if (si >= '0' && si <= '9')
            int_value = si - '0';
        else if (si >= 'a' && si <= 'f')
            int_value = si - 'a' + 10;
        else if (si >= 'A' && si <= 'F')
            int_value = si - 'A' + 10;
        else
            break;

        n = 16 * n + int_value;
        ++i;
    }
    return n;
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
