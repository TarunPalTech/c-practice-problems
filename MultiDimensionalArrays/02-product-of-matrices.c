// Problem: Write a program to calculate the product of two matrices each of order 3x3.

#include<stdio.h>

void printMatrix(int [][3]);
void productOfMatrices(int [][3], int [][3]);
int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    productOfMatrices(a,b);
    return 0;
}
void productOfMatrices(int a[][3], int b[][3]){
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=0;
            for(int k=0;k<3;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
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