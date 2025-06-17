// Problem: Write a program to calculate factorial of a number.

#include<stdio.h>

int main(){
    int n, fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==0){
        printf("Factorial is 1.");
        return 0;
    }
    while(n){
        fact*=n;
        n--;
    }
    printf("Factorial is %d.",fact);
    return 0;
}