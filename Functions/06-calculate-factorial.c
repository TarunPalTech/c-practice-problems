// Problem: Write a function to calculate the factorial of a number. (TSRS)

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
    if(n==0){
        return 1;
    }
    int fact=1;
    while(n){
        fact*=n;
        n--;
    }
    return fact;
}