#include <stdio.h>

int var1;
static int var2;
const char str[] = "Hello, world!";

int main() {
    /* external variable is automatically initialized with zero
       extern can be defined in a different source file */ 
    extern int var1;
    
    /* static variables are also automatically initialized with zero
       a static is private to the current source file  */
    printf("%d\n", var1);
    printf("%d\n", var2);

    // str[0] = 'h'; read-only location cannot be assigned to
    printf("%s\n", str);

}
