// Problem: Write a function to print first N terms of Fibonacci series (TSRN)

#include<stdio.h>

void printFib(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printFib(n);
    return 0;
}
void printFib(int n){
    int a=-1,b=1,c;
    while(n){
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        n--;
    }
}