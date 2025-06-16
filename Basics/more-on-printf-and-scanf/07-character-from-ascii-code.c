// Problem: Write a program to input an ASCII code from the user and print its corresponding character.

// Description:  This program takes an ASCII code (integer) as input and prints the corresponding character.

#include<stdio.h>

int main(){
    int x;
    printf("Enter ASCII code:");
    scanf("%d",&x);
    printf("Character is %c.",x);
    return 0;
}