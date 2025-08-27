/*Experiment 2.3*/
/*wap to convert temperature from celcius to fahrenheit*/
#include <stdio.h>

int main() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("temp in farhenheit %lf", f) ;
    return 0;
}

