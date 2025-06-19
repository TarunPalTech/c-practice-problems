// Problem: Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.

#include<stdio.h>

void input(int [], int);
int findFirstDuplicateOccurrence(int [],int);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    int duplicate = findFirstDuplicateOccurrence(a,size);
    if(duplicate){
        printf("First Adjacent duplicate occurrence is %d.",duplicate);
    }else{
        printf("There is no adjacent duplicate!");
    }
    return 0;
}
int findFirstDuplicateOccurrence(int a[],int size){
    for(int i=0;i<size-1;i++){
        if(a[i]==a[i+1]){
            return a[i];
        }
    }
    return 0;
}
void input(int a[], int size){
    printf("Enter %d elements:",size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
}