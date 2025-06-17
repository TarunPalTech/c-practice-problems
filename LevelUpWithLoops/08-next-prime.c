// Problem: Write a program to find next Prime number of a given number.

#include<stdio.h>
#include<math.h>

int main(){
    int n, i;
    printf("Enter a number:");
    scanf("%d",&n);
    n=n+1;
    while(1){
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                break;
            }
        }
        if(i>sqrt(n)){
            printf("%d is the next prime number!",n);
            return 0;
        }
        n++;
    }
}