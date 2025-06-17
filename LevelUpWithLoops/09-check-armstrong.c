// Problem: Write a program to check whether a given number is an Armstrong, number or not.

#include<stdio.h>
#include<math.h>

int main(){
    int n, temp, rev=0, count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp){
        count++;
        temp/=10;
    }
    temp=n;
    while(temp){
        rev+=pow(temp%10,count);
        temp/=10;
    }
    if(rev==n){
        printf("Number is armstrong!");
    }else{
        printf("Number isn't armstrong!");
    }
    return 0;
}