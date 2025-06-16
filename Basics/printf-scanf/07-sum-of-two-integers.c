// Problem: Write a program to calculate sum of two integers. Numbers are taken from user through keyboard.

// Description: This program takes two integer inputs from the user using scanf() and calculates their sum using the + operator.

#include<stdio.h>

int main(){
    int a, b, result;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    result = a + b;
    printf("Sum is %d.",result);
    return 0;
}