// Problem: Write a function to find the greatest number from the given array of any size. (TSRS)

#include<stdio.h>

int findGreatest(int [],int);
void input(int [], int);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    printf("Greatest number is %d.",findGreatest(a,size));
    return 0;
}
int findGreatest(int a[],int size){
    int greatest=a[1];
    for(int i=1;i<size;i++){
        if(greatest<a[i]){
            greatest=a[i];
        }
    }
    return greatest;
}
void input(int a[], int size){
    printf("Enter %d elements:",size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
}