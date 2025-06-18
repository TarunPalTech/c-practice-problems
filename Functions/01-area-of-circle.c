// Problem: Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>

float area_of_circle(float);
int main(){
    float r;
    printf("Enter area of circle:");
    scanf("%f",&r);
    float area = area_of_circle(r);
    printf("Area of circle is %.2f.",area_of_circle(r));
    return 0;
}
float area_of_circle(float r){
    return 3.14*r*r;
}