// Problem: Write a program to calculate sum of first N odd natural numbers.

#include<stdio.h>

int main(){
    int n, sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=2*i-1;
    }
    printf("Sum is %d.",sum);
    return 0;
}