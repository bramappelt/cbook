#include <stdio.h>

void shellsort(int v[], int n);

int main(void) {
    int i, n;
    int v[] = {2, 6, 7, 5, 7 , 9, 0 , 10, 10, 1};

    n = 10;
    shellsort(v, n);
    
    for (i = 0; i < n; ++i)
        printf("%d, ", v[i]); 
}

/* sort in increasing order */
void shellsort(int v[], int n) {
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap/=2)
        for (i = gap; i < n; i++)
            for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}
