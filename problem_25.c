// Write a function to convert celius into farenheit.

#include<stdio.h>

float cTf(float celsius);

int main() {

    float celsius;

    printf("Enter temperature in Celsius : ");
    scanf("%f", &celsius);

    // float far = cTf(celsius);

    printf("Conversion is : %f", cTf(celsius));

    return 0;
}

float cTf(float celsius) {
    
    float conversion = (celsius * 1.8) + 32;

    return conversion;
}