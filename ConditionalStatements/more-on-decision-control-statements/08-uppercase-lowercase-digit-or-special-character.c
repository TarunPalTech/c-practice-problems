// Problem: Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

// Description:
// This program takes a single character input from the user.
// It checks whether the character is:
// - an uppercase letter (A–Z),
// - a lowercase letter (a–z),
// - a digit (0–9),
// - or a special character (anything else).
// It uses ASCII value ranges to determine the type of character.


#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90){
        printf("Uppercase alphabet!");
    }else if(ch>=97 && ch<=122){
        printf("Lowercase alphabet!");
    }else if(ch>=48 && ch<=57){
        printf("Digit!");
    }else{
        printf("Other character!");
    }
    return 0;
}