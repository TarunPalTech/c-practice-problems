// Problem: Write a program to calculate volume of a cuboid.

// Description: This program calculates the volume of a cuboid given its length, width, and height.


#include<stdio.h>

int main(){
    int length, width, height, vol;
    printf("Enter length, width, and height:");
    scanf("%d%d%d",&length,&width,&height);
    vol = length * width * height;
    printf("Volume of the cuboid is %d cubic units.",vol);
    return 0;
}