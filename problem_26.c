//  Write a function to calculate percentage of a student from Marks in Science Math & Sanskrit.

#include<stdio.h>

float percentageMarks(float science, float math, float sanskrit);

int main() {
    float science, math, sanskrit;
    printf("Enter no. for science : ");
    scanf("%f", &science);
    printf("Enter no. for math : ");
    scanf("%f", &math);
    printf("Enter no. for sanskrit : ");
    scanf("%f", &sanskrit);

    printf("total percentage is : %f % ", percentageMarks(science, math, sanskrit));

    return 0;
}

float percentageMarks(float science, float math, float sanskrit) {

    float percentage = (science + math + sanskrit)/300*100;

    return percentage;

}