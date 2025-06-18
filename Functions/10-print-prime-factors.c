// Problem: Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include<stdio.h>

void printPrimeFactors(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printPrimeFactors(n);
    return 0;
}
void printPrimeFactors(int n){
    int i=2;
    while(n>1){
        if(n%i==0){
            printf("%d\t",i);
            n/=i;
        }else{
            i++;
        }
    }
}