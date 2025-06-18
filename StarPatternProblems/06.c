/*
Problem:
1
21
321
4321
*/

#include<stdio.h>

int main(){
    int temp;
    for(int i=1;i<=4;i++){
        temp=i;
        for(int j=1;j<=4;j++){
            if(j<=i){
                printf("%d",temp--);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}