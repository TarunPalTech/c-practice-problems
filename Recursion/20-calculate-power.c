// Problem: Write a program in C to calculate the power of any number using recursion.

#include<stdio.h>

float calculatePower(float, float);
int main(){
    float n, p;
    printf("Enter a number and power:");
    scanf("%f%f",&n,&p);
    printf("Value is %.2f!",calculatePower(n,p));
    return 0;
}
float calculatePower(float n, float p){
    if(p==0){
        return 1;
    }else if(p>0){
        return n*calculatePower(n,p-1);
    }else{
        return calculatePower(n,p+1)/n;
    }
}