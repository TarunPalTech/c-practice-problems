// Problem: Write a recursive function to calculate sum of first N odd natural numbers.

// Description:
// This program uses recursion to compute the sum of the first 'n' odd numbers.
// The nth odd number is given by (2n - 1). The function adds the current odd number
// and recursively calls itself with (n - 1) until it reaches the base case.
//
// Example:
// Input: 4
// Output: 16 (1 + 3 + 5 + 7)

#include<stdio.h>

int sumN(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum is %d.",sumN(n));
    return 0;
}
int sumN(int n){
    if(n==1){
        return 1;
    }
    return 2*n -1+ sumN(n-1);
}