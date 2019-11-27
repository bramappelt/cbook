#include <stdio.h>

void squeeze_orig(char s[], int c);
void squeeze_self(char s1[], const char s2[]);


int main(void) {
    int omit = 's';
    char line_remove[] = "ait";
    char line[] = "Thisissparta";
    char line2[] = "Thisissparta";
    char line3[] = "Thisissparta";
    
    // original function
    squeeze_orig(line, omit);
    printf("%s\n", line);

    // my function
    squeeze_self(line2, line_remove);
    printf("%s\n", line2);

    // my second function
    squeeze_self(line3, line_remove);
    printf("%s\n", line3);

    return 0;

}

/* alternative to squeeze > delete all chars in s1 that occur in s2 */
void squeeze(char s1[], const char s2[]) {
    int i, j, k;

    // matches found relies on the completion of the loop
    // (one var less than the other example)
    for (i = j = 0; s1[i] != '\0'; ++i) {
        for (k = 0; s2[k] != '\0'  && s1[i] != s2[k]; ++k)
            ;

        // if loop was completed last char should be null character
        if (s2[k] == '\0')
            s1[j++] = s1[i];
    }
    s1[j] = '\0';        
}

/* alternative to squeeze > delete all chars in s1 that occur in s2 */
void squeeze_self(char s1[], const char s2[]) {
    int i, j, k;
    int match;

    // 'match' saves the state whether there were matches found
    for (i = j = 0; s1[i] != '\0' ; ++i) {
        match = 0;
        for (k = 0; s2[k] != '\0' ; ++k) {
            if (s1[i] == s2[k]) {
                match = 1;
                break;
            }
        }

        if (!match)
            s1[j++] = s1[i];
        
    }
    s1[j] = '\0';
}

/* delete a c from s */
void squeeze_orig(char s[], int c) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; ++i)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

