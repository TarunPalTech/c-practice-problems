// Problem: Write a recursive function to calculate HCF of two numbers.

// Description:
// This program implements the Euclidean Algorithm to compute the HCF of two integers.
// The function uses recursion to repeatedly call itself with the smaller number and the remainder,
// until the second number becomes zero. At that point, the first number is the HCF.

#include<stdio.h>

int hcf(int,int);
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("HCF is %d.",hcf(a,b));
    return 0;
}
int hcf(int a, int b){
    if(b==0){
        return a;
    }
    return hcf(b,a%b);
}