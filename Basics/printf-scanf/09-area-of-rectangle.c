// Problem: Write a program to calculate area of a rectangle. Input appropriate data from the user.

// Description: This program reads the length and width of a rectangle from the user using scanf(), then calculates the area using the formula: area = length * width, and displays the result.

#include<stdio.h>

int main(){
    int length, width, area;
    printf("Enter length and width:");
    scanf("%d%d",&length,&width);
    area = length * width;
    printf("Area is %d.",area);
    return 0;
}