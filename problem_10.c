// Print the table of a  number entered by a user

#include<stdio.h>

int main() {

    int number;
    printf("enter the number : ");
    scanf("%d" , &number);

// My first approach

    // for(int i = number; i<=100 ; i = i + number) {
    //     printf("%d \n" , i);     
    // }

    for(int i = 1; i<=10 ; i = i + 1) {
        printf("%d \n" , i * number);     
    }
    return 0;

}