// Problem: Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>

int countDigits(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int totalDigits = countDigits(n);
    printf("There %s total %d %s.",totalDigits==1?"is":"are", totalDigits, totalDigits==1?"digit":"digits");
    return 0;
}
int countDigits(int n){
    if(n){
        return 1+countDigits(n/10);
    }
}