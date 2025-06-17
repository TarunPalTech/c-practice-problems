// Problem: Write a program to check whether a given number is an even number or an odd number without using % operator.

// Description: By using arithmetic operators.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n/2*2==n){
        printf("Even!");
    }else{
        printf("Odd!");
    }
    return 0;
}