// Problem: Write a function to find the next prime number of a given number. (TSRS)

#include<stdio.h>
#include<math.h>

int find_next_prime(int);
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Next prime number is %d.",find_next_prime(n+1));
    return 0;
}
int find_next_prime(int n){
    int i;
    while(1){
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                break;
            }
        }
        if(i>sqrt(n)){
            return n;
        }
        n++;
    }
}