// Problem: Write a program to check whether a given number is divisible by 3 and divisible by 2.

// Description:
// This program takes an integer input from the user and checks whether it is divisible by both 3 and 2.
// If the number is divisible by both, it prints a confirmation message.
// Otherwise, it informs the user that the number is not divisible by both.


#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%3==0 && n%2==0){
        printf("Number is divisible by 3 and 2!");
    }else{
        printf("Number isn't divisible by 3 and 2!");
    }
    return 0;
}