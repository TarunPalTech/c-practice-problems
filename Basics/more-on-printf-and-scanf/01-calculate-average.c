// Problem: Write a program to calculate average of three integers. Numbers are given by the user.

// Description: This program takes three integers as input using scanf(), calculates their average by dividing the sum by 3.0, and prints the result as a float value.

#include<stdio.h>

int main(){
    int num1, num2, num3;
    float avg;
    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    avg = (num1 + num2 + num3) / 3.0;
    printf("Average is %f.",avg);
    return 0;
}