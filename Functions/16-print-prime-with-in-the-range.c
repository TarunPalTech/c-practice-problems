// Problem: Write a function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>
#include<math.h>

void find_prime(int, int);
int main(){
    int a, b;
    printf("Enter starting point and then ending point:");
    scanf("%d%d",&a,&b);
    find_prime(a,b);
    return 0;
}
void find_prime(int a, int b){
    int i;
    while(a<b){
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
}