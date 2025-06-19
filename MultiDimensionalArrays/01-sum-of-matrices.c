// Problem: Write a program to calculate the sum of two matrices each of order 3x3.

#include<stdio.h>

void printMatrix(int [][3]);
void sumOfMatrices(int [][3], int [][3]);
int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    sumOfMatrices(a,b);
    return 0;
}
void sumOfMatrices(int a[][3], int b[][3]){
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printMatrix(c);
}
void printMatrix(int c[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}