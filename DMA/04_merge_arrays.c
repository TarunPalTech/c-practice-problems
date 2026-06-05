/* 
    Write a function to merge two array elements and store it in dynamically created array. Return address of this dynamically created array.
*/

#include<stdio.h>
#include<stdlib.h>

int* mergeTwoArrays(int *p, int *q, int size1, int size2){
    int *arr = NULL;
    
    arr = (int*)malloc((size1 + size2) * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed!");
        exit(EXIT_FAILURE);
    }
    
    int i;
    for(i=0;i<size1;i++){
        arr[i] = p[i];
    }
    for(int j=0;j<size2;j++){
        arr[i++] = q[j];
    }
    
    return arr;
}
int main(){
    int arr1[6] = {1,2,3,4,5,6}, arr2[4] = {9,8,7,10};
    
    int *result = mergeTwoArrays(arr1, arr2, 6, 4);
    
    for(int i=0;i<10;i++){
        printf("%d\t",result[i]);
    }
    
    return 0;
}
