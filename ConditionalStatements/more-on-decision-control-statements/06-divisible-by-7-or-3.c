// Problem: Write a program to check whether a given number is divisible by 7 or divisible by 3.

// Description:
// This program takes an integer input from the user and checks whether it is divisible by 7 or 3.
// If the number is divisible by 7 or 3, it prints a confirmation message.
// Otherwise, it informs the user that the number is not divisible.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%7==0 || n%3==0){
        printf("Number is divisible by 7 or 3!");
    }else{
        printf("Number isn't divisible by 7 or 3!");
    }
    return 0;
}