// Problem: Write a program to print a table of N.

#include<stdio.h>

int main(){
    int n, i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=10){
        printf("%d\t",i*n);
        i++;
    }
    return 0;
}