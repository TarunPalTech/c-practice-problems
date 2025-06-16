// Problem: Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)

// Description: (number*10) shift left and (+digit) append the digit.

#include<stdio.h>

int main(){
    int number = 234, digit = 9, res;
    res = number*10+digit;
    printf("Number is %d.",res);
    return 0;
}