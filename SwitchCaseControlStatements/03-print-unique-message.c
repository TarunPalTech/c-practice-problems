// Problem: Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include<stdio.h>

int main(){
    int n;
    printf("Enter day number:");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Hi!");
            break;
        case 2:
            printf("Hello!");
            break;
        case 3:
            printf("Good Morning!");
            break;
        case 4:
            printf("Stay Happy!");
            break;
        case 5:
            printf("Live long!");
            break;
        case 6:
            printf("Welcome!");
            break;
        case 7:
            printf("You may succeed in your life!");
            break;
        default:
            printf("Enter a correct value!");
    }
}