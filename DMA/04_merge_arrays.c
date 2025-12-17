/* 
    Write a function to merge two array elements and store it in dynamically created array. Return address of this dynamically created array.
*/

#include<stdio.h>
#include<stdlib.h>
#define size 10

void input(int*);
void display(int*);
void merge(int*, int*);

int main(){
    int a[10], b[10];
    input(a);
    input(b);
    merge(a,b);
    return 0;
}

void merge(int *p, int *q){
    int i;
    int *r = (int*)malloc(size*2);
    for(i=0;i<size;i++){
        *(r+i)=*(p+i);
    }
    for(int j=0;j<size;j++){
        *(r+i)=*(q+j);
        i++;
    }
    display(r);
}

void display(int *p){
    for(int i=0;i<size*2;i++){
        printf("%d\t",*(p+i));
    }
}

void input(int *p){
    printf("Enter %d elements:",size);
    for(int i=0;i<size;i++){
        scanf("%d",(p+i));
    }
}