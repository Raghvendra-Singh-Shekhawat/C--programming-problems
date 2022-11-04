// Print the Sun of first n natural Numbers and also , print them in reverse .

#include<stdio.h>

int main() {

    int number;
    printf("Enter the value of n : ");
    scanf("%d" , &number);
    int sum = 0;

    for(int i = 1,j  = number; i <= number , j >= 1 ; i++ , j--){
         sum = sum + i;
         printf(" %d \n" , j);
    }
    printf("Sum is : %d \n" , sum);

    // for(int i = number; i >= 1; i--){
    //     printf(" %d \n" , i);
    // }

    return 0;
}