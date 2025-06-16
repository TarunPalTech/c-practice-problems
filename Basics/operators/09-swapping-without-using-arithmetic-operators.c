// Problem: Write a program to swap values of two int variables without using third variable and arithmetic operators.

// Description: 

#include<stdio.h>

int main(){
    int a = 10, b = 20;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Now:\na = %d\nb = %d",a,b);
    return 0;
}