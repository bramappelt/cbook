#include <stdio.h>

int main(){
    float fahr, celcius;
    int low, high, step;

    low = 0;
    high = 300;
    step = 20;
    
    printf("%3s\t%6s\n", "F", "C");
    printf("==============\n");

    fahr = low;
    while (fahr <= high){
        celcius = 5.0 / 9.0 * (fahr - 32);
        printf("%3.0f  |  %6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}