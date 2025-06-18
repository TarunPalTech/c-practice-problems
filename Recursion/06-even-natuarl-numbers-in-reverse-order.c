// Problem: Write a recursive function to print first n even natural numbers in reverse order.

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
        printf("%d\t",2*n);
        printN(n-1);
    }
}