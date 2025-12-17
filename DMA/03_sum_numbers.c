/* 
    Write a program to calculate the sum of n numbers entered by the user using malloc and free.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter number of elements that you want to add:");
    scanf("%d",&n);
    int *p = (int*)malloc(n*4);
    printf("Enter %d elements:");
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
        sum+=*(p+i);
    }
    printf("Sum is %d.",sum);
    free(p);
    return 0;
}
