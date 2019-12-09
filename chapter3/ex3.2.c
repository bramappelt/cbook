#include <stdio.h>

// prototype
void escape(char s[], char t[]);
void escape_reverse(char s[], char t[]);

int main(void) {
    int c;
    char line[] = "Hello\tworld\t!!!!!\n";
    char save[1000];
    char result[1000];

    escape(save, line);
    printf("%s\n", save);

    escape_reverse(result, save);
    printf("%s\n", result);

    return 0;
}

/* make escape sequences visible */
void escape(char s[], char t[]) {
    int i, j;

    i = j = 0;
    while (t[i] != '\0') {
        switch (t[i]) {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            default:
                s[j++] = t[i];
                break;
        }
        i++;
    }
    s[j] == '\0';
}

/* replace visible escape sequences with its meaning */
void escape_reverse(char s[], char t[]) {
    int i, j;

    i = j = 0;
    while (t[i] != '\0') {
        if (t[i] == '\\') {
            switch (t[++i]) {
                case 't':
                    s[j++] = '\t';
                    ++i;
                    break;
                case 'n':
                    s[j++] = '\n';
                    ++i;
                    break;
                default:
                    s[j++] = '\\';
                    s[j++] = t[i++];
                    break;
            }
        }
        else
            s[j++] = t[i++];
    }
    s[j] == '\0';
}
