// Problem: What will be the value stored in the variable x after executing following statement: x=3<0&&5>0;

// Description: Value in the variable x is 0 because if any of the expression is false then result will be false in the case of && operator.

#include<stdio.h>

int main(){
    int x=3<0&&5>0;
    printf("Value in variable x is %d.",x);
    return 0;
}