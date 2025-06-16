// Problem: Write a program to print size of an int, a float, a char and a double type variable.

// Description: Please consider %zu not %d.

#include<stdio.h>

int main(){
    int a;
    float b;
    char c;
    double d;
    printf("Size of the int variable is %zu bytes.\n",sizeof(a));
    printf("Size of the float variable is %zu bytes.\n",sizeof(b));
    printf("Size of the char variable is %zu byte.\n",sizeof(c));
    printf("Size of the double variable is %zu bytes.\n",sizeof(d));
}