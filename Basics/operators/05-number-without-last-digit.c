// Problem: Write a program to print a given number without its last digit.

// Description: By using division operator and value of the denominator must be 10.

#include<stdio.h>

int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Number without last digit is %d.",x/10);
    return 0;
}