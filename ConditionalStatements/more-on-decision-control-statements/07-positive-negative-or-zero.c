// Problem: Write a program to check whether a given number is positive, negative or zero.

// Description:
// This program takes an integer input from the user and checks if the number is positive, negative, or zero.
// It uses simple conditional (if-else) statements to determine and print the appropriate message.


#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>0){
        printf("Positive!");
    }else if(n<0){
        printf("Negative!");
    }else{
        printf("Zero!");
    }
    return 0;
}