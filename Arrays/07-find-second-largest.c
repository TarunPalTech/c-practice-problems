// Problem: Write a program to find second largest in an array. Take array values from the user.

#include<stdio.h>
int main(){
    int a[10], temp;
    printf("Enter 10 elements:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    int largest,secondLargest;
    if(a[1]>a[2]){
        largest=a[1];
        secondLargest=a[2];
    }else{
        largest=a[2];
        secondLargest=a[1];
    }
    for(int i=2;i<10;i++){
        if(largest<a[i]){
            secondLargest=largest;
            largest=a[i];
        }else if(secondLargest<a[i]){
            secondLargest=a[i];
        }
    }
    printf("Second largest number is %d.",secondLargest);
    return 0;
}