// Problem: Write a function to check whether a given number contains a given digit or not. (TSRS)

#include<stdio.h>

int findDigit(int, int);
int main(){
    int n, d;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter a digit:");
    scanf("%d",&d);
    if(findDigit(n,d)){
        printf("Digit exists!");
    }else{
        printf("Digit doesn't exist!");
    }
    return 0;
}
int findDigit(int n, int d){
    while(n){
        if(n%10==d){
            return 1;
        }
        n/=10;
    }
    return 0;
}