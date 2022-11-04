// Calculate the sum of all numbers betwwen 5 and 50 (including 5 and 50)

#include<stdio.h>
int main() {
    int sum = 0;

    for(int i = 5; i<=50; i++) {
        sum = sum + i ;
    }
    printf("%d" , sum);
    return 0 ;  
}