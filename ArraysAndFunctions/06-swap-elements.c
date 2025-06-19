// Problem: Write a function to swap two elements of given array with specified indices.


#include<stdio.h>

void printArray(int [], int);
void swapElements(int [], int, int);
void input(int [], int);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    int i1,i2;
    printf("Enter indices to swap elements:");
    scanf("%d%d",&i1,&i2);
    swapElements(a,i1,i2);
    printf("Array after swapping:\n");
    printArray(a,size);
    return 0;
}
void swapElements(int a[], int i1, int i2){
    int temp=a[i1];
    a[i1]=a[i2];
    a[i2]=temp;
}
void printArray(int a[], int size){
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
}
void input(int a[], int size){
    printf("Enter %d elements:",size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
}