// Problem: Write a recursive function to calculate sum of digits of a given number.

#include<stdio.h>

int sumOfDigits(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum is %d.",sumOfDigits(n));
    return 0;
}
int sumOfDigits(int n){
    if(n){
        return n%10 + sumOfDigits(n/10);
    }
}