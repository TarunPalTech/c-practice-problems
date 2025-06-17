// Problem: Write a program to print the first N even natural numbers.

#include<stdio.h>

int main(){
    int n,i=2;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n*2){
        printf("%d\t",i);
        i+=2;
    }
    return 0;
}