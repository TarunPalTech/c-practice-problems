// Problem: Write a program to print first N terms of Fibonacci series.

#include<stdio.h>

int main(){
    int n,i=1,a=-1,b=1,c;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        i++;
    }
    return 0;
}