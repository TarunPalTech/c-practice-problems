// Problem: Write a menu driven program with the following options:
// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// 5. Exit

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    float a,b;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
    while(1){
        printf("\nChoose an option:");
        scanf("%d",&n);
        switch(n){
            case 1:
                printf("Enter two numbers:");
                scanf("%f%f",&a,&b);
                printf("Sum is %.2f.",a+b);
                break;
            case 2:
                printf("Enter two numbers:");
                scanf("%f%f",&a,&b);
                printf("Subtraction is %.2f.",a-b);
                break;
            case 3:
                printf("Enter two numbers:");
                scanf("%f%f",&a,&b);
                printf("Multiplication is %.2f",a*b);
                break;
            case 4:
                printf("Enter two numbers:");
                scanf("%f%f",&a,&b);
                printf("Division is %.2f.",a/b);
                break;
            case 5:
                printf("Now, you are out from the program!");
                exit(0);
            default:
                printf("Please choose a correct option!");
        }
    }
    return 0;
}