// Problem: Write a program to print all Armstrong numbers under 1000.

#include<stdio.h>
#include<math.h>

int main(){
    int a=1;
    while(a<1000){
        int temp,rev=0,count=0;
        temp=a;
        while(temp){
            count++;
            temp/=10;
        }
        temp=a;
        while(temp){
            rev+=pow(temp%10,count);
            temp/=10;
        }
        if(rev==a){
            printf("%d\t",a);
        }
        a++;
    }
    return 0;
}