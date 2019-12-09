#include <stdio.h>
#include "pretty_print_array.h"

#define INT_LIMIT 100
#define FLT_LIMIT 100

int main() {
    int a[INT_LIMIT];
    double f[FLT_LIMIT];

    int i, j;
    
    // initialize a
    for (i=0; i<INT_LIMIT; ++i){
        a[i] = i;
    }

    // initialize f
    for (j=0; j<FLT_LIMIT; ++j){
        f[j] = (double)j;
    }

    // pretty print array
    print_array(a, INT_LIMIT);
}

