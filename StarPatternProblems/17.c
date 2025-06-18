/*
Problem:
    1
   1 1
  1 2 1
 1 2 2 1
1 2 3 2 1
*/

#include<stdio.h>

int main(){
    int temp, k;
    for(int i=1;i<=5;i++){
        temp=1;
        k=1;
        for(int j=1;j<=9;j++){
            if(j>=6-i && j<=4+i){
                if(k){
                    j<5?printf("%d",temp++):printf("%d",temp--);
                }else{
                    if(j==5){
                        temp--;
                    }
                    printf(" ");
                }
                k=1-k;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}