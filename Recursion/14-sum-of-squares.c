// Problem: Write a recursive function to calculate sum of squares of first n natural numbers.

#include<stdio.h>

int sumN(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum is %d.",sumN(n));
    return 0;
}
int sumN(int n){
    if(n==1){
        return 1;
    }
    return n*n + sumN(n-1);
}