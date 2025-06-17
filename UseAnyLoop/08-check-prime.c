// Problem: Write a program to check whether a given number is a Prime number or not.

#include<stdio.h>
#include<math.h>

int main(){
    int n, i;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<2){
        printf("Not a prime number!");
        return 0;
    }
    int limit = sqrt(n);
    for(i=2;i<=limit;i++){
        if(n%i==0){
            printf("Number isn't prime!");
            return 0;
        }
    }
    printf("Number is prime!");
    return 0;
}