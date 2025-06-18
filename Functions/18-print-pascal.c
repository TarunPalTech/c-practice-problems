// Problem: Write a function to print PASCAL Triangle. (TSRN)

#include<stdio.h>

int factorial(int);
void printPattern(int);
int combination(int, int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printPattern(n);
}
void printPattern(int n){
    int k, temp;
    for(int i=1;i<=n;i++){
        k=1;
        temp=0;
        for(int j=1;j<=n*2-1;j++){
            if(j>=n+1-i && j<=n-1+i){
                k?printf("%d",combination(i-1,temp++)):printf(" ");
                k=1-k;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int combination(int n, int r){
    return factorial(n)/(factorial(n-r)*factorial(r));   
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    int fact=1;
    while(n){
        fact*=n;
        n--;
    }
    return fact;
}