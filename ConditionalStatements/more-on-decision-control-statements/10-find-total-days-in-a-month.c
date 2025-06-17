// Problem: Write a program which takes the month number as an input and display number of days in that month.

// Description:
// This program takes an integer input from the user representing a month number (1 to 12).
// It checks the corresponding number of days in that month:
// - Months with 31 days: Jan, Mar, May, Jul, Aug, Oct, Dec
// - Months with 30 days: Apr, Jun, Sep, Nov
// - February (month 2) has 28 or 29 days depending on leap year, so both are mentioned.
// If the user enters an invalid month number (not in the range 1–12), it shows an error message.


#include<stdio.h>

int main(){
    int n;
    printf("Enter month number:");
    scanf("%d",&n);
    if(n>=1 && n<=12){
        if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12){
            printf("31 days!");
        }else if(n==2){
            printf("28 or 29 days!");
        }else{
            printf("30 days!");
        }
    }else{
        printf("Invalid month number!");
    }
    return 0;
}