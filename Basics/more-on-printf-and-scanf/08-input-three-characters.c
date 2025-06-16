// Problem: Write a program to input three characters from the user and display characters with their corresponding ASCII codes.

// Description:  This program takes three characters as input (separated by commas because newline character creates an issue by considering newline character as a charcter entered by the user) and prints each character along with its ASCII value.

#include<stdio.h>

int main(){
    char a, b, c;
    printf("Enter three charcters separated by comma:");
    scanf(" %c,%c,%c",&a,&b,&c);
    printf("%c - %d\n%c - %d\n%c - %d",a,a,b,b,c,c);
    return 0;
}