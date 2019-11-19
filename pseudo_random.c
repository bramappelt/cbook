#include <stdio.h>
#define MAXLEN 1000


// function prototypes
int rand(unsigned long seed);
long long atoi_self(char s[]);
int getline(char s[], int maxlen);


/* take a seed, return a random number */
int main() {
    int c;
    char line[MAXLEN];
    long long seed;

    while ((c = getline(line, MAXLEN)) != 0) {
        seed = atoi_self(line);
        printf("%d\n", rand(seed));
    }
    return 0;
}

/* pseudo random number between 0 and 32767 */
int rand(unsigned long seed) {
    seed = seed * 1103515245 + 12345;
    return (unsigned int)(seed / 65536) % 32768;
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
