// 7. Write a function to sort an array of int type values. [ void sort(int *ptr, int size); ]

#include<stdio.h>

void sort(int *p, int size);
int main(){
    int numbers[10] = {23, 5, 89, 12, 7, 55, 3, 42, 18, 66};
    sort(numbers,10);
    for(int i=0;i<10;i++){
        printf("%d\t",numbers[i]);
    }
    return 0;
}
void sort(int *p,int size){
    int temp;
    for(int round=1;round<size;round++){
        for(int i=0;i<size-round;i++){
            if(*(p+i)>*(p+i+1)){
                temp=p[i];
                p[i]=p[i+1];
                p[i+1]=temp;
            }
        }
    }
}