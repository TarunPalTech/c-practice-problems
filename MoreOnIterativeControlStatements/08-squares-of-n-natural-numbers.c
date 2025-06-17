// Problem: Write a program to print squares of the first N natural numbers.

#include<stdio.h>

int main(){
    int n, i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\t",i*i);
        i++;
    }
    return 0;
}