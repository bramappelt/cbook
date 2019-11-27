#include <stdio.h>

int any2(const char s1[], const char s2[]);

int main(void) {
    const char line1[] = "This is sparta!";
    const char line2[] = "s";
    const char line3[] = "!";
    const char line4[] = "x";

    printf("%d\n", any2(line1, line2));
    printf("%d\n", any2(line1, line3));
    printf("%d\n", any2(line1, line4));

    return 0;
}

int any2(const char s1[], const char s2[]) {
    int i, j;

    for (i=0; s1[i] != '\0'; ++i)
        for (j=0; s2[j] != '\0'; ++j)
            // return on first match
            if (s1[i] == s2[j])
                return i;
    // when no match was found
    return -1;
}