// Problem:. Write a recursive function to calculate factorial of a given number.

#include<stdio.h>

int factorial(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factorial is %d.",factorial(n));
    return 0;
}
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}