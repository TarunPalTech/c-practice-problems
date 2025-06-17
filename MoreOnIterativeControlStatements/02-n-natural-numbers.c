// Problem: Write a program to print the first N natural numbers.

#include<stdio.h>

int main(){
    int n, i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\t",i);
        i++;
    }
    return 0;
}