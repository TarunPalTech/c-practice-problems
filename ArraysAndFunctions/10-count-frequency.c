// Problem: Write a function to count the frequency of each element of an array. 

#include<stdio.h>

void countFrequency(int a[], int size);
void sort(int a[], int size);
void input(int a[], int size);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    countFrequency(a,size);
    return 0;
}
void countFrequency(int a[], int size){
    int  i=0, j=1;
    sort(a,size);
    while(i<size){
        while(j<size && a[i]==a[j]){
            j++;
        }
        printf("%d - %d\n",a[i],j-i);
        i=j;
        j=i+1;
    }
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
void input(int a[], int size){
    printf("Enter %d elements:",size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
}