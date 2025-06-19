// Problem: Write a function to sort an array of any size. (TSRN)

#include<stdio.h>

void input(int [], int);
void sort(int [], int);
void printArray(int [], int);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    sort(a,size);
    printArray(a,size);
    return 0;
}
void sort(int a[], int size){
    int temp;
    for(int round=1;round<size;round++){
        for(int i=0;i<size-round;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
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