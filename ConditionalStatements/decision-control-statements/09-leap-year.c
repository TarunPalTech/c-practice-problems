// Problem: Write a program to check whether a given year is a leap year or not.

// Description:
// A year is a leap year if it satisfies the following conditions:
// - If it is not a century year (not divisible by 100) and divisible by 4 → Leap year.
// - If it is a century year (divisible by 100), then it must also be divisible by 400 → Leap year.
// Otherwise, it's not a leap year.

#include<stdio.h>

int main(){
    int year;
    printf("Enter an year:");
    scanf("%d",&year);
    if(year%100==0){
        if(year%400==0){
            printf("Leap Year!");
        }else{
            printf("Not a leap year!");
        }
    }else{
        if(year%4==0){
            printf("Leap Year!");
        }else{
            printf("Not a leap year!");
        }
    }
    return 0;
}