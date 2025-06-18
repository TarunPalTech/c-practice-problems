/*
Problem:
   *
  * *
 * * *
* * * *
*/

#include<stdio.h>

int main(){
    int temp;
    for(int i=1;i<=4;i++){
        temp=1;
        for(int j=1;j<=7;j++){
            if(j>=5-i && j<=3+i){
                temp?printf("*"):printf(" ");
                temp=1-temp;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}