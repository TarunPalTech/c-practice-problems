/*
Problem:
   1
  121
 12321
1234321
*/

#include<stdio.h>

int main(){
    int temp;
    for(int i=1;i<=4;i++){
        temp=1;
        for(int j=1;j<=7;j++){
            if(j>=5-i && j<=3+i){
                j<4?printf("%d",temp++):printf("%d",temp--);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}