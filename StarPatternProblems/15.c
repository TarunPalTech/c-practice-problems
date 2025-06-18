/*
Problem:
ABCDEFG
 ABCDE
  ABC
   A
*/

#include<stdio.h>

int main(){
    char ch;
    for(int i=1;i<=4;i++){
        ch='A';
        for(int j=1;j<=7;j++){
            if(j>=i && j<=8-i){
                printf("%c",ch++);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}