// Problem: Write a program to swap values of two int variables in single line arithmetic expression.

// Description:  Brackets are used to balance the priority so that we can get desired output.

#include<stdio.h>

int main(){
    int a = 10, b = 20;
    a=a+b-(b=a);
    printf("Now:\na = %d\nb = %d",a,b);
    return 0;
}