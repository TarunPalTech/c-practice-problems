// Problem: Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)

// Description: x/10 is used to remove last digit then multiply by 10 to add 0.

#include<stdio.h>

int main(){
    int x = 2345, res;
    x = x/10*10;
    printf("Now number is %d.",x);
    return 0;
}