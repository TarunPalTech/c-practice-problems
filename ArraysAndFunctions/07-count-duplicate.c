// Problem: Write a function to count a total number of duplicate elements in an array. (Means elements that occurs 2 times in an array)

#include<stdio.h>

int countDuplicate(int a[], int size);
void sort(int a[], int size);
void printArray(int a[], int size);
void input(int a[], int size);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    printf("Total number of duplicates are %d.",countDuplicate(a,size));
    return 0;
}
int countDuplicate(int a[], int size){
    int count=0, i=0, j=1;
    sort(a,size);
    while(i<size-1){
        while(j<size && a[i]==a[j]){
            j++;
        }
        if(j-i>1){
            count++;
        }
        i=j;
        j=i+1;
    }
    return count;
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