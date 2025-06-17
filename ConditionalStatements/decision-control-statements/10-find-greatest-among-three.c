// Problem: Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

// Description: 
// This program takes three integers as input and determines the greatest among them.
// If the greatest number appears multiple times (e.g., two or all three values are the same and greatest), 
// it still prints that number only once.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("%d is greater!",a);
    }else if(b>=a && b>=c){
        printf("%d is greater!",b);
    }else{
        printf("%d is greater!",c);
    }
    return 0;
}