// Problem: Write a program to calculate LCM of two numbers.

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(int L=a>b?a:b;L<=a*b;L++){
        if(L%a==0 && L%b==0){
            printf("LCM is %d.",L);
            return 0;
        }
    }
}