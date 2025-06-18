// Problem: Write a menu driven program with the following options:
// 1. Factorial of a number
// 2. Check Even and Odd
// 3. Area of circle
// 4. Sum of first N natural numbers
// 5. Exit

// #include<stdio.h>
// #include<stdlib.h>

int main(){
    int n, num;
    printf("1. Factorial\n2. Even and Odd\n3. Area of circle\n4. Sum of natural numbers\n5. Exit\n");
    while(1){
        printf("\nChoose an option:");
        scanf("%d",&n);
        switch(n){
            case 1:
                printf("Enter a number:");
                scanf("%d",&num);
                if(num==0){
                    printf("Factorial is 1!");
                    break;
                }
                int fact=1;
                while(num){
                    fact*=num;
                    num--;
                }
                printf("Fcactorial is %d.",fact);
                break;
            case 2:
                printf("Enter a number:");
                scanf("%d",&num);
                if(num%2==0){
                    printf("Number is even!");
                }else{
                    printf("Number is odd!");
                }
                break;
            case 3:
                float r;
                printf("Enter a number:");
                scanf("%f",&r);
                printf("Area of circle is %.2f.",3.14*r*r);
                break;
            case 4:
                int sum=0;
                printf("Enter a number:");
                scanf("%d",&num);
                for(int i=1;i<=num;i++){
                    sum+=i;
                }
                printf("Sum is %d.",sum);
                break;
            case 5:
                printf("Now, you are out from the program!");
                exit(0);
            default:
                printf("Choose a valid option!");
        }
    }
    return 0;
}