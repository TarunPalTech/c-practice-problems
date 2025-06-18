// Problem: Write a menu driven program with the following options:
// 1. Calculate LCM of two numbers
// 2. Calculate sum of the digits of a number
// 3. Volume of a cuboid
// 4. Check whether a given number is Prime or not
// 5. Exit

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int n, a,b,c;
    printf("1. LCM\n2. Sum of digits\n3. Volume of cuboid\n4. Check Prime\n5. Exit\n");
    while(1){
        printf("\nChoose an option:");
        scanf("%d",&n);
        switch(n){
            case 1:
                printf("Enter two numbers:");
                scanf("%d%d",&a,&b);
                int L;
                for(L=a>b?a:b;L<=a*b;L++){
                    if(L%a==0 && L%b==0){
                        printf("LCM is %d.",L);
                        break;
                    }
                }
                break;
            case 2:
                printf("Enter a number:");
                scanf("%d",&a);
                int sum=0;
                while(a){
                    sum+=a%10;
                    a/=10;
                }
                printf("Sum is %d.",sum);
                break;
            case 3:
                printf("Enter value of a, b, and c:");
                scanf("%d%d%d",&a,&b,&c);
                printf("Volume of cuboid is %d.",a*b*c);
                break;
            case 4:
                printf("Enter a number:");
                scanf("%d",&a);
                int i;
                for(i=2;i<=sqrt(a);i++){
                    if(a%i==0){
                        printf("Number isn't prime!");
                        break;
                    }
                }
                if(i>sqrt(a)){
                    printf("Number is prime!");
                }
                break;
            case 5:
                printf("You are out from the program!");
                exit(0);
            default:
                printf("Choose correct option!");
        }
    }
    return 0;
}