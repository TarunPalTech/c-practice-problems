// Problem: Write a recursive function to print first N terms of Fibonacci series

#include<stdio.h>

void printFib(int);
int fib(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printFib(n);
    return 0;
}
void printFib(int n){
    if(n>0){
        printFib(n-1);
        printf("%d\t",fib(n-1));
    }
}
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}