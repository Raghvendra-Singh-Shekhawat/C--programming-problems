#include<stdio.h>

int main() {

    float pie = 3.14;
    float radius;

    printf("Enter the radius:");
    scanf("%f", &radius);

    printf("%f" , pie * radius * radius);

    return 0;
}