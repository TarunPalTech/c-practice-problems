// Problem:  Write a program to input a character from the user and prints its ASCII code.

// Description: This program takes a character as input and displays its corresponding ASCII value.

#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character:");
    scanf(" %c",&ch); // Note the space before %c to consume any leftover newline character
    printf("ASCII code is %d.",ch);
    return 0;
}