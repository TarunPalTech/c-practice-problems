// Problem: Write a function to calculate HCF of two numbers. (TSRS)

#include<stdio.h>

int hcf(int, int);
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("HCF is %d.",hcf(a,b));
    return 0;
}
int hcf(int a, int b){
    int H=1, i=2;
    while(a>1 && b>1){
        if(a%i==0 && b%i==0){
            a/=i;
            b/=i;
            H*=i;
        }else if(a%i==0){
            a/=i;
        }else if(b%i==0){
            b/=i;
        }else{
            i++;
        }
    }
    return H;
}