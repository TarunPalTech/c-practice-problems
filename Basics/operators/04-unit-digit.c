// Problem: Write a program to print unit digit of a given number.

// Description: By using modulus operator(%) and value of the divisor must be 10.

// #include<stdio.h>

int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Unit digit is %d.",x%10);
    return 0;
}