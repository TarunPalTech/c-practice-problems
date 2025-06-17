// Problem: Write a program to print India N times on the screen.

#include<stdio.h>

int main(){
    int n, i=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while(i<=n){
        printf("India\n");
        i++;
    }
    return 0;
}