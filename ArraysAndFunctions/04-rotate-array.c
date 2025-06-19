// Problem: Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70); n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29])

#include<stdio.h>

void input(int [], int);
void printArray(int [], int);
void rotateArray(int [], int, int, int);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    int n,d;
    printf("Enter number of elements and direction(1 for left and 0 for right) to rotate:");
    scanf("%d%d",&n,&d);
    rotateArray(a,size,n,d);
    printArray(a,size);
}
void rotateArray(int a[], int size, int n, int d){
    int temp, i;
    if(d==1){
        while(n){
            temp=a[0];
            i=0;
            while(i<size-1){
                a[i]=a[i+1];
                i++;
            }
            a[size-1]=temp;
            n--;
        }
    }else if(d==0){
        while(n){
            temp=a[size-1];
            i=size-1;
            while(i>0){
                a[i]=a[i-1];
                i--;
            }
            a[0]=temp;
            n--;
        }
    }else{
        printf("PLease enter correct value of the direction!");
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