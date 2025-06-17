// Problem: Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>

int main(){
    int n,i=1,a=-1,b=1,c;
    printf("Enter a number:");
    scanf("%d",&n);
    while(1){
        c=a+b;
        if(c==n){
            printf("Number exists in the fibonacci series!");
            return 0;
        }else if(c>n){
            printf("Number doesn't exist in the fibonacci series!");
            return 0;
        }
        a=b;
        b=c;
        i++;
    }
}