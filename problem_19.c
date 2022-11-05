//  Write a function that prints "Namaste" if useris indian & "Bonjour if the user is French"

#include<stdio.h>

void greet();

int main() {
    greet ();
    return 0;
}

void greet() {
    char origin;
    printf("Who are you ( i for Indian/ f for french) : ");
    scanf("%c" , &origin);

    if(origin == 'i') {
        printf("Namaste");
    }
    if(origin == 'f') {
        printf("Bonjour");
    }
}