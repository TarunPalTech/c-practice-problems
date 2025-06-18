// Problem: Write a function to print all Armstrong numbers between two given numbers. (TSRN)

#include<stdio.h>
#include<math.h>

void print_all_armstrong(int, int);
int main(){
    int a,b;
    printf("Enter starting point and ending point:");
    scanf("%d%d",&a,&b);
    print_all_armstrong(a,b);
    return 0;
}
void print_all_armstrong(int a, int b){
    while(a<b){
        int temp,count=0,rev=0;
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
}