// Problem: Write a program to print greater between two numbers. Print one number if both are the same.

// Description: By using relational or comparision operator.

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is greater!",a);
    }else{
        printf("%d is greater!",b);
    }
    return 0;
}