// Problem: Write a program to find the smallest number stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main(){
    int a[10];
    printf("Enter 10 elements:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int smallest=a[0];
    for(int i=1;i<10;i++){
        if(smallest>a[i]){
            smallest=a[i];
        }
    }
    printf("Smallest number is %d.",smallest);
    return 0;
}