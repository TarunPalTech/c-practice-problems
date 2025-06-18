/* 
1234321
123 321
12   21
1     1
*/

#include<stdio.h>

int main(){
    char ch;
    for(int i=1;i<=4;i++){
        ch='A';
        for(int j=1;j<=7;j++){
            if(j<=5-i || j>=3+i){
                j<4?printf("%c",ch++):printf("%c",ch--);
            }else{
                if(j==4){
                    ch--;
                }
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}