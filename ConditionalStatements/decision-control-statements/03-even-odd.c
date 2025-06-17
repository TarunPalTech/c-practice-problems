// Problem: Write a program to check whether a given number is an even number or an odd number.

// Description: We are using modulus operator to check remainder of the given number.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2==0){
        printf("Even!");
    }else{
        printf("Odd!");
    }
    return 0;
}