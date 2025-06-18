/*
Problem:
ABCDE
 ABCD
  ABC
   AB
    A
*/

#include<stdio.h>

int main(){
    char ch;
    for(int i=1;i<=5;i++){
        ch='A';
        for(int j=1;j<=5;j++){
            if(j>=i){
                printf("%c",ch++);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}