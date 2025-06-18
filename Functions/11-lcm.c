// Problem: Write a function to calculate LCM of two numbers. (TSRS)

#include<stdio.h>

int lcm(int,int);
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("LCM is %d.",lcm(a,b));
    return 0;
}
int lcm(int a,int b){
    int flag, L=1, i=2;
    while(a>1 || b>1){
        flag=0;
        if(a%i==0){
            a/=i;
            flag=1;
        }
        if(b%i==0){
            b/=i;
            flag=1;
        }
        if(flag==1){
            L*=i;
        }else{
            i++;
        }
    }
    return L;
}