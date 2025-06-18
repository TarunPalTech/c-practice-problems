// Problem: Write a function to calculate simple interest. (TSRS)

#include<stdio.h>

float si(float, float, float);
int main(){
    float p, r, t;
    printf("Enter principle amount, rate of interest, and period of time:");
    scanf("%f%f%f",&p,&r,&t);
    printf("Simple interest is %.2f.",si(p,r,t));
    return 0;
}
float si(float p, float r, float t){
    return (p*r*t)/100.0;
}