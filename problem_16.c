// Print reverse of the table for a number n

#include<stdio.h>

int main() {

    int number;
    printf("Enter the number : ");
    scanf("%d" , &number);

    for(int i = 10; i>=1; i--) {
        printf("%d\n" , i*number);
    }
    return 0;
}