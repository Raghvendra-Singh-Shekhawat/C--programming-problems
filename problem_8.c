// Print the Numbers from 0 to n, if n is given by user

#include<stdio.h>

int main() {
    int i = 0;
    int number;
    printf("Enter the value of n : ");
    scanf("%d" , &number);

    while(i <= number){
        printf("%d \n" , i);
        i =i+1;
    }
    return 0;
}