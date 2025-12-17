/* 
    Write a program to ask the user to input a number of data values he would like to enter then create an array dynamically to accommodate the data values. Now take the input from the user and display the average of data values. 
*/

#include<stdio.h>
#include<stdlib.h> // used for calloc

int main(){
    int n;
    printf("Enter number of data values that you want to enter:");
    scanf("%d",&n);
    int *data = (int*)calloc(n,4);
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",(data+i));
    }
    for(int i=0;i<n;i++){
        printf("%d\t",*(data+i));
    }
    free(data);
    return 0;
}