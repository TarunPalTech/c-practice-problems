// Problem: Write a function to find the sum of first N terms of the series 11/1+21/2+3!/3+41/4+5!/5... n!/n (TSRS)

#include<stdio.h>

int factorial(int);
int sum_of_series(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of the series is %d.",sum_of_series(n));
    return 0;
}
int sum_of_series(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum + (factorial(i)/i);
    }
    return sum;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    int fact=1;
    while(n){
        fact*=n;
        n--;
    }
    return fact;
}