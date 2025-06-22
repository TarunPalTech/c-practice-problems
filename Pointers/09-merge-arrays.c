// 8. Write a function to merge two arrays in a given array. [ void merge(int *arr1, int size1, int *arr2, int size2, int *arr3); ]

#include<stdio.h>

void merge(int *arr1, int *arr2, int size1, int size2, int *arr3);
int main(){
    int arr1[5] = {10,20,30,40,50};
    int arr2[7] = {60,70,80,90,100,110,120};
    int arr3[12];
    merge(arr1,arr2,5,7,arr3);
    for(int i=0;i<12;i++){
        printf("%d\t",arr3[i]);
    }
    return 0;
}
void merge(int *arr1, int *arr2, int size1, int size2, int *arr3){
    int i, j;
    for(i=0;i<size1;i++){
        *(arr3+i) = *(arr1+i);
    }
    for(j=0;j<size2;j++){
        *(arr3+i) = *(arr2+j);
        i++;
    }
}