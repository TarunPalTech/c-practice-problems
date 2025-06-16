// Problem: Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.

// Description: We are using pre increment operator here.

#include<stdio.h>

int main(){
    char ch = 'A';
    printf("Now, character is %c.",++ch);
    return 0;
}