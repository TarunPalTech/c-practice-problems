// Problem: Write a program to calculate circumference of a circle.

// Description: This program takes the radius of a circle as input and calculates the circumference.

#include<stdio.h>

int main(){
    float r,c;
    printf("Enter circumference of the circle:");
    scanf("%f",&r);
    c = 2 * 3.14 *r;
    printf("Circumference is %f.",c);
    return 0;
}