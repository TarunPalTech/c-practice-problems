// 1. Write a function to swap values of two int variables (TSRN).

#include<stdio.h>

void swap(int *p, int *q);
int main(){
    int a=10, b=20;
    printf("Values before swapping:\n");
    printf("a = %d\nb = %d\n",a,b);
    swap(&a,&b);
    printf("Values after swapping:\n");
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}
void swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}