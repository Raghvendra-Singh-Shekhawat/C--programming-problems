// Factorial of n using recursion.

#include<stdio.h>

int fact(int n);

int main() {

    printf("factorial is : %d", fact(5));
    return 0;
}

int fact(int n) {
    if(n == 0) {
        return 1;
    }

    int factnm1 = fact(n-1) * n;
    // int factn = factnm1 * n;
    return factnm1 ;
}