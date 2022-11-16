//  Write functions to calculate area of a square, a circle & s rectsngle . 

#include<stdio.h>
#include<math.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float length , float breadth);

int main() {
    float side , length, breadth, radius;
    
    printf("Enter the side : \n");
    scanf("%f", &side);
    squareArea(side);

    circleArea(radius);

    return 0;

}

float squareArea(float side) {
   
    float area = pow(side, 2);
    printf("area of square is %f \n", area);
}

float circleArea(float radius) {

    printf("Enter the radius : ");
    scanf("%f", &radius);

    float area = 3.14 * pow(radius, 2);
    printf("area of circle is %f", area);
}