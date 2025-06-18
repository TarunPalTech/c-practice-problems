// Problem: Write a recursive function to print reverse of a given number.

#include<stdio.h>

void printReverse(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printReverse(n);
    return 0;
}
void printReverse(int n){
    if(n){
        printf("%d",n%10);
        printReverse(n/10);
    }
}