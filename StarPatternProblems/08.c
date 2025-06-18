/*
Problem:
1
23
456
78910
*/

#include<stdio.h>

int main(){
    int temp=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(j<=i){
                printf("%d",temp++);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}