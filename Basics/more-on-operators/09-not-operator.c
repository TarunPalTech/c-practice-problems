// Problem: What will be the value stored in the variable x after executing following statement: x=!2>-2;

// Description:  Value in variable x is 1 because !2 is equal to 0 and 0 is greater than -2.

#include<stdio.h>

int main(){
    int x=!2>-2;
    printf("Value in variable x is %d.",x);
    return 0;
}