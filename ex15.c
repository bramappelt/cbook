#include <stdio.h>

/* fahrenheit2 program using a function */

//function prototype
float fahrenheit(float celcius);


int main(){
    float fahr, celcius;
    int low, high, step;

    low = 0;
    high = 100;
    step = 10;

    celcius = low;
    while (celcius <= high){
        printf("%3.0f\t%6.1f\n", celcius, fahrenheit(celcius));
        celcius = celcius + step;
    }
}


float fahrenheit(float celcius){
    float fahr;

    return -32.0 + (9.0 / 5.0) * celcius;
}


