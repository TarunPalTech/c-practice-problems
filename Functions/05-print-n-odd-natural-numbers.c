// Problem: Write a function to print first N odd natural numbers. (TSRN)

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
    for(int i=1;i<=n;i++){
        printf("%d\t",2*i-1);
    }
}