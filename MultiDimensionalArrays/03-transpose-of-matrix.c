// Problem: Write a program to print the transpose of a given matrix.

#include<stdio.h>

void printMatrix(int [][3]);
void transposeMatrix(int [][3]);
int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    transposeMatrix(a);
    return 0;
}
void transposeMatrix(int a[][3]){
    int temp;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    printMatrix(a);
}
void printMatrix(int c[][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}