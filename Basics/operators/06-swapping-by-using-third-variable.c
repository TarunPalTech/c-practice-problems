// Problem: Write a program to swap values of two int variables.

// Description: temp is just used to hold value so that we can swap values easily.

#include<stdio.h>

int main(){
    int a = 10, b = 20, temp;
    temp=a;
    a=b;
    b=temp;
    printf("Now:\na = %d\nb = %d",a,b);
    return 0;
}