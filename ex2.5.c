#include <stdio.h>

int any(const char s1[], const char s2[]);

int main(void) {
    const char line1[] = "This is sparta!";
    const char line2[] = "s";
    const char line3[] = "!";
    const char line4[] = "x";


    printf("%d\n", any(line1, line2));
    printf("%d\n", any(line1, line3));
    printf("%d\n", any(line1, line4));

    return 0;
}

int any(const char s1[], const char s2[]) {
    int i, j;

    i = 0;
    while (s1[i] != '\0') {
        for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; ++j)
            ;
        // match was found
        if (s2[j] != '\0')
            return i;
        else
            ++i;
    }
    // when no match was found
    return -1;
}
