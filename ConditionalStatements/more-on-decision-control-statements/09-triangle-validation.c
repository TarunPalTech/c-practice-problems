// Problem: Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.

// Description:
// This program takes three integers as input, representing the lengths of the sides of a triangle.
// It checks the validity of the triangle using the triangle inequality theorem:
// For a triangle to be valid, the sum of any two sides must be greater than the third side.
// If all three conditions are satisfied, it prints that the triangle is valid; otherwise, it is not.

#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter sides of a triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b+c && b<c+a && c<a+b){
        printf("Triangle is valid!");
    }else{
        printf("Triangle isn't valid!");
    }
    return 0;
}