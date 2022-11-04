//  Write a program to check if student passed or failed
//    conditions :--  marks > 30  pass
//                    marks <= 30  fail

#include<stdio.h>

int main() {

    int number;

    printf("Enter the number : ");
    scanf("%d" , &number);

    if(number > 30 && number <= 100){
        printf("Pass");
    }else if(number = 0 && number <= 30) {
        printf("Fail");
    }
    else{
        printf("wrong value");
    }
}