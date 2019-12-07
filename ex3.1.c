#include <stdio.h>

/* This implementation is faster, however it isn't much */

int binsearch_self(int x, int v[], int n);

int main(void) {
    int i;
    int result;
    
    int n = 1000;
    int x = 889;
    int v[n];

    // initialize
    for (i=0; i < n; ++i)
        v[i] = i;

    result = binsearch_self(x, v, n);
    printf("%d at index %d\n", x, result);

    return 0;
}

/* find index of array element x using binary search
   v it the array, n is its length. return -1 if not present */
int binsearch_self(int x, int v[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (x != v[mid] && low <= high){
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }
    if (low <= high)
        return x;
    return -1;
}
