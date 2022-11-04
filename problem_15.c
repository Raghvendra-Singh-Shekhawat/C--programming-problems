// Print the factorial of a number n

#include<stdio.h>

int main() {
    int number;
    printf("Enter the number : ");
    scanf("%d" , &number);
    int multiply = 1 ;

    for(int i = 1; i<= number; i = i+1 ) {
        multiply = multiply * i ;
        printf("%d \n" , multiply);
        
    }
    printf("%d \n" , multiply);
    return 0;
}