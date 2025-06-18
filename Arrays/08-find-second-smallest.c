// Problem: Write a program to find the second smallest number in an array. Take array values from the user.

#include<stdio.h>
int main(){
    int a[10], temp;
    printf("Enter 10 elements:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int smallest,secondSmallest;
    if(a[1]>a[2]){
        smallest=a[1];
        secondSmallest=a[2];
    }else{
        smallest=a[2];
        secondSmallest=a[1];
    }
    for(int i=2;i<10;i++){
        if(smallest>a[i]){
            secondSmallest=smallest;
            smallest=a[i];
        }else if(secondSmallest>a[i]){
            secondSmallest=a[i];
        }
    }
    printf("Second largest number is %d.",secondSmallest);
    return 0;
}