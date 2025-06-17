// Problem: Write a program to find the Nth term of the Fibonacci series.

#include<stdio.h>

int main(){
    int n,i=1,a=-1,b=1,c;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n){
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    printf("%dth term is %d.",n,c);
    return 0;
}