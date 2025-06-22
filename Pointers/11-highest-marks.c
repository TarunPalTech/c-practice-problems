// 10. There are five classes with different number of students in them. Five arrays containing marks of students of each class. Write a function to receive an address of an array of pointers to access marks of all the students. The job of function is to find the highest marks among all the classes.

#include<stdio.h>

int getHighestmarks(int **q, int *sizes);
int main(){
    int a[5] = {55,46,85,43,56};
    int b[3] = {32,78,45};
    int c[6] = {37,52,68,72,65,46};
    int d[4] = {33,61,71,83};
    int e[8] = {65,49,84,54,91,28,39,59};
    int sizes[] = {5,3,6,4,8};
    int *p[5] = {a,b,c,d,e};
    int highestMarks =  getHighestmarks(p,sizes);
    printf("Highest marks is %d.",highestMarks);
    return 0;
}
int getHighestmarks(int **q,int *sizes){
    int highest = *(*(q+0)+0);
    for(int i=0;i<5;i++){
        for(int j=0;j<sizes[i];j++){
            if(highest < *(*(q+i) + j)){
                highest = *(*(q+i) + j);
            }
        }
    }
    return highest;
}