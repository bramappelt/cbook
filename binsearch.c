#include <stdio.h>


int binsearch(int x, int v[], int n);

int main(void) {
    int i;
    int result;
    
    int n = 1000;
    int x = 889;
    int v[n];

    // initialize
    for (i=0; i < n; ++i)
        v[i] = i;

    result = binsearch(x, v, n);
    printf("%d at index %d\n", x, result);
}

/* find index of array element x using binary search
   v it the array, n is its length. return -1 if not present */
int binsearch(int x, int v[], int n) {
    int low, high, mid;
    
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (high + low) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}
