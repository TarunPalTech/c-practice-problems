// Problem: Write a program to check whether a given character is uppercase alphabet or lower case alphabet or some other special character, using switch case statement.

#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    switch(ch){
        case 'A' ... 'Z':
            printf("Uppercase alphabet!");
            break;
        case 'a' ... 'z':
            printf("Lowercase alphabet!");
            break;
        default:
            printf("Some other special character!");
    }
}