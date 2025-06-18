// Problem: Write a recursive function to print binary of a given decimal number.

#include<stdio.h>

void printBin(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printBin(n);
    return 0;
}
void printBin(int n){
    if(n){
        printBin(n/2);
        printf("%d",n%2);
    }
}