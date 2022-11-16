//  Use library functions to calculate the square of a number given by user

#include<stdio.h>
#include<math.h>

int main() {
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);
    int power = pow(n, 2);

    printf("square of the number is %d", power);

    return 0;
}