// Problem: Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main(){
    int a[10], sum=0;
    printf("Enter 10 elements:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    float avg = sum / 10.0;
    printf("Average is %.2f.",avg);
    return 0;
}