// Problem: Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n*2>=1){
        printf("%d\t",n*2-1);
        n--;
    }
    return 0;
}