// Problem: Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main(){
    int a[10], sumEven=0, sumOdd=0;
    printf("Enter 10 elements:");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            sumEven+=a[i];
        }else{
            sumOdd+=a[i];
        }
    }
    printf("Sum of even numbers is %d.\n",sumEven);
    printf("Sum of odd numbers is %d.",sumOdd);
    return 0;
}