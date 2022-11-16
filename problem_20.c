//  Write functions to calculate sum of two numbers.

#include<stdio.h>

int sum(int a, int b) ;  //argument / actual parameter

int main() {
    int a, b;

    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    sum(a, b);
    // printf("sum is %d", s);

    return 0;
}

int sum(int a, int b) { //parameter / formal parameter
    int su =  a + b;
    printf("sum is %d", su);
    return 0 ;
}
