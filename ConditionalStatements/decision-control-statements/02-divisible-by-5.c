// Problem: Write a program to check whether a given number is positive or non positive.

// Description: If the given number is greater than 0 then number is positive otherwise number is negative.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>0){
        printf("Positive!");
    }else{
        printf("Non-Positive!");
    }
    return 0;
}