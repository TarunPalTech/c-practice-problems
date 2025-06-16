// Problem: Write a program to calculate square of a given number. Number is entered by the user.

// Description: This program reads an integer from the user using scanf(), calculates its square by multiplying the number by itself, and prints the result.

#include<stdio.h>

int main(){
    int num, square;
    printf("Enter a number:");
    scanf("%d",&num);
    square = num * num;
    printf("Square is %d.",square);
    return 0;
}