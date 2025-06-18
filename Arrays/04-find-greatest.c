// Problem: Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main(){
    int a[10];
    printf("Enter 10 elements:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int greatest=a[0];
    for(int i=1;i<10;i++){
        if(greatest<a[i]){
            greatest=a[i];
        }
    }
    printf("Greatest number is %d.",greatest);
    return 0;
}