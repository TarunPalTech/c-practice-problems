// Problem: Write a recursive function to print first squares of n natural numbers.

#include<stdio.h>

void printN(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printN(n);
    return 0;
}
void printN(int n){
    if(n>0){
        printN(n-1);
        printf("%d\t",n*n);
    }
}