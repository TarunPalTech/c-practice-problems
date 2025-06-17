// Problem: Write a program to check whether a given number is a three digit number or not.

// Description: If the number is less than 1000 and greater than 0 then it will be a three digit number.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("Three digit number!");
    }else{
        printf("Not a three digit number!");
    }
    return 0;
}