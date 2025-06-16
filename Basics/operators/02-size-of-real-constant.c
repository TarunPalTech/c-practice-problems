// Problem: Write a program to calculate size of a real constant.

// Description: Size of real constant is double by default.

#include<stdio.h>

int main(){
    printf("Size of a real constant is %zu bytes.",sizeof(3.5));
    return 0;
}

// Size of a real constant is 8 bytes.