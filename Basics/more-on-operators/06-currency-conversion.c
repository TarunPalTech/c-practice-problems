// Problem: Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.

// Description: Must use %f so that we can handle float values.

#include<stdio.h>

int main(){
    int inr;
    printf("Enter rupees in INR:");
    scanf("%d",&inr);
    printf("Amount in USD is %f.",inr/84.23);
    return 0;
}