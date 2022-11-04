// Write a program to check if a number is divisible by 2 or not

#include<stdio.h>

int main() {

    int number;
    printf("enter the number");
    scanf("%d" , &number);

    printf("%d" , number % 2 == 0);

    return 0;
}