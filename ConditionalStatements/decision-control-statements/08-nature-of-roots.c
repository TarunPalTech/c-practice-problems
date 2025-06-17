// Problem: Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.

// Description: 
// This program calculates the discriminant (D = b² - 4ac) of a quadratic equation.
// Based on the value of D, it prints whether the roots are:
// - Real and Equal
// - Real and Different
// - Imaginary

#include<stdio.h>

int main(){
    int D, a, b, c;
    printf("Example: (ax^2+bx+c)\n");
    printf("Enter value of a, b, and c:");
    scanf("%d%d%d",&a,&b,&c);
    D = b*b - 4*a*c;
    if(D==0){
        printf("Roots are real and equal!");
    }else if(D>0){
        printf("Roots are real and distinct!");
    }else{
        printf("Roots are imaginary!");
    }
    return 0;
}