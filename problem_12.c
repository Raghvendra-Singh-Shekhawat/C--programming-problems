// Keep taking numbers as input from user until user enters an odd number

#include<stdio.h>

int main() {
    int n;

    for(int i = n; ; ){
        printf("enter the no : ");
        scanf("%d" , &n);
        printf("%d\n", n);

        if(n % 7 == 0){
            break;
        }
    }

    printf("thank you");

    return 0;

}