// Problem: Write a program to input a three digit number and display the sum of the digits.

// Description: Value of num variable will be a three digit value otherwise it will not work.

#include<stdio.h>

int main(){
    int num, sum;
    printf("Enter a three digit number:");
    scanf("%d",&num);
    sum = num%10+num/10%10+num/100;
    printf("Sum is %d.",sum);
    return 0;
}