/* 
    Write a program to calculate the sum of n numbers entered by the user using malloc and free.
*/

#include<stdio.h>
#include<stdlib.h>

int* inputDataValues(int *count_out){
    int *arr = NULL;
    int capacity = 2, count = 0, val;
    
    arr = (int*)malloc(capacity * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed!");
        exit(EXIT_FAILURE);
    }
    
    printf("Enter values(type 'End' to stop): ");
    while(scanf("%d",&val) == 1){
        if(count == capacity){
            capacity *= 2;
            int *temp = (int*)realloc(arr, sizeof(int) * capacity);
            if(temp == NULL){
                printf("Memory allocation failed!");
                free(arr);
                exit(EXIT_FAILURE);
            }
            arr = temp;
        }
        arr[count++] = val;
    }
    
    *count_out = count;
    return arr;
}

int sumOfDataValues(int *arr, int n){
    if(arr == NULL){
        printf("Something wrong!");
        exit(EXIT_FAILURE);
    }
    
    int sum = 0;
    
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    
    return sum;
}

int main(){
    int n;
    
    int *arr = inputDataValues(&n);
    
    printf("Sum is %d!", sumOfDataValues(arr, n));
    free(arr);
    
    return 0;
}
