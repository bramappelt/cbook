#include <stdio.h>

int main(){
    float fahr, celcius;
    int low, high, step;

    low = 0;
    high = 100;
    step = 10;

    celcius = low;
    while (celcius <= high){
        fahr = -32.0 + (9.0 / 5.0) * celcius;
        printf("%3.0f\t%6.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
}
