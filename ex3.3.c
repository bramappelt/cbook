#include <stdio.h>

void expand(char s1[], char s2[]);

int main(void) {
    char s1[] = "A-Z";
    char s2[] = "a-z0-9";
    char s3[] = "-a-z";
    char s4[] = "a-b-c-";
    
    char sx[100];

    // some tests
    expand(s1, sx);
    printf("%s\n", sx);
    
    expand(s2, sx);
    printf("%s\n", sx);

    expand(s3, sx);
    printf("%s\n", sx);
    
    expand(s4, sx);
    printf("%s\n", sx);

    return 0;
}

/* Expand shorthand notation like a-z in the string s1 into the
   equivalent complete list abc..xyz in s2. Allows for letters of
   either case and digits. Also handles a-b-c and a-z0-9 and -a-z.
   Leading and trailing hyphens are taken literally.
*/
void expand(char s1[], char s2[]) {
    int i, j;
    char c;

    i = j = 0;
    while ((c = s1[i++]) != '\0')
        if (s1[i] == '-' && c <= s1[i+1])
            // right most bound is not copied yet
            for (i++; c < s1[i]; c++)
                s2[j++] = c;
        else
            s2[j++] = c;
    s2[j] = '\0';
}
