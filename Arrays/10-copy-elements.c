// Problem: Write a program in C to copy the elements of one array into another array. Take array values from the user.

#include<stdio.h>
int main(){
    int a[10], b[10];
    printf("Enter 10 elements:");
    // Taking values from user..
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    // Copy data into array b
    for(int i=0;i<10;i++){
        b[i]=a[i];
    }
    // It prints values of array b...
    for(int i=0;i<10;i++){
        printf("%d\t",b[i]);
    }
    return 0;
}