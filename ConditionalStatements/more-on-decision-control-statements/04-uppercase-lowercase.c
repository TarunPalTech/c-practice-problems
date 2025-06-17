// Problem: Write a program to check whether a given alphabet is in uppercase or lowercase.

// Description:
// This program takes a single character as input from the user.
// It checks whether the character is an uppercase alphabet (A–Z) or a lowercase alphabet (a–z).
// If the character is not an alphabet (like a digit or symbol), it informs the user accordingly.


#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90){
        printf("Uppercase alphabet!");
    }else if(ch>=97 && ch<=122){
        printf("Lowercase alphabet!");
    }else{
        printf("Other character!");
    }
    return 0;
}