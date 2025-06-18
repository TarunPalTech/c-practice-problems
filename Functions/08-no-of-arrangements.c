// Problem: Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

#include<stdio.h>

int permutation(int,int);
int factorial(int);
int main(){
    int n,r;
    printf("Enter number of elements and selected elements:");
    scanf("%d%d",&n,&r);
    printf("Number of arrangements are %d.",permutation(n,r));
    return 0;
}
int permutation(int n,int r){
    return factorial(n)/factorial(n-r);
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