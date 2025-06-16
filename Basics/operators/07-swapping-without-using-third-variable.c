// Problem: Write a program to swap values of two int variables without using a third variable.

// Description: By using + and - operator.

// #include<stdio.h>

int main(){
    int a = 10, b = 20;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Now:\na = %d\nb = %d",a,b);
    return 0;
}