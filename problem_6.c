// Write a Program to find if a character is uppercase or not.

#include<stdio.h>

int main() {

    char letter;
    printf("Enter the Letter : ");
    scanf("%c" , &letter);

    if (letter >= 'A' && letter <= 'Z') {
        printf("It  is Uppercase \n");
    } else {
        printf("not uppercase");
    }

    return 0;


}