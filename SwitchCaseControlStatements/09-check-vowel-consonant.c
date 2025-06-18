// Problem: Write a program to check whether a given character is vowel or consonant or some other special character, using switch case statement.

#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    switch(ch){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel");
            break;
        case 'B' ... 'D':
        case 'F' ... 'H':
        case 'J' ... 'N':
        case 'P' ... 'T':
        case 'V' ... 'Z':
            printf("Consonant");
            break;
        default:
            printf("Some other special character.");
    }
    return 0;
}