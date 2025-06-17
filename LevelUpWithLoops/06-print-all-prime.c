// Problem: Write a program to print all Prime numbers under 100.

#include<stdio.h>
#include<math.h>

int main(){
    int a=2, i;
    while(a<100){
        for(i=2;i<=sqrt(a);i++){
            if(a%i==0){
                break;
            }
        }
        if(i>sqrt(a)){
            printf("%d\t",a);
        }
        a++;
    }
    return 0;
}