// Problem: Write a function to print first N prime numbers (TSRN)

#include<stdio.h>
#include<math.h>

void print_n_prime(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    print_n_prime(n);
    return 0;
}
void print_n_prime(int n){
    int a=2, i;
    while(n){
        for(i=2;i<=sqrt(a);i++){
            if(a%i==0){
                break;
            }
        }
        if(i>sqrt(a)){
            printf("%d\t",a);
            n--;
        }
        a++;
    }
}