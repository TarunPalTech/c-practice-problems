// Problem: Write a program to count digits in a given number.

#include<stdio.h>

int main(){
    int n, count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n){
        n/=10;
        count++;
    }
    printf("Number of digits are %d.",count);
    return 0;
}