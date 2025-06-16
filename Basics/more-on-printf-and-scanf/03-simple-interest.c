// Problem: Write a program to calculate simple interest.

// Description: This program calculates the simple interest given principal, rate, and time.

#include<stdio.h>

int main(){
    float p, r, t, si;
    printf("Enter principle amount:");
    scanf("%f%f%f",&p,&r,&t);
    si = (p*r*t) / 100.0;
    printf("Simple interest is %f.",si);
    return 0;
}