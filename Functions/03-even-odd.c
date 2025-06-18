// Problem: Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include<stdio.h>

int check_even_odd(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(check_even_odd(n)){
        printf("Number is even!");
    }else {
        printf("Number is odd!");
    }
    return 0;
}
int check_even_odd(int n){
    if(n%2==0){
        return 1;
    }
    return 0;
}