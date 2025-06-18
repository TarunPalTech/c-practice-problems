// Problem: Write a menu driven program with the following options:
// 1. Check whether a given set of three numbers are lengths of an isosceles triangle or not
// 2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
// 3. Check whether a given set of three numbers are equilateral triangle or not
// 4. Exit

#include<stdio.h>

int main(){
    int n, a, b, c;
    printf("1. Isosceles\n2. Right Angled\n3. Equilateral\n4. Exit\n");
    while(1){
        printf("\nChoose an option:");
        scanf("%d",&n);
        switch(n){
            case 1:
                printf("Enter sides of the triangle: ");
                scanf("%d%d%d",&a,&b,&c);
                if(a<b+c && b<a+c && c<a+b){
                    if(a==b && a==c){
                        printf("Triangle isn't isosceles!");
                    }else{
                        if(a==b || b==c || a==c){
                            printf("Triangle is isosceles!");
                        }else{
                            printf("Triangle isn't isosceles!");
                        }
                    }
                }else{
                    printf("Triangle isn't valid!");
                }
                break;
            case 2:
                printf("Enter sides of the triangle: ");
                scanf("%d%d%d",&a,&b,&c);
                if(a<b+c && b<a+c && c<a+b){
                    if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
                        printf("Triangle is right-angled!");
                    }else{
                        printf("Triangle isn't right-angled!");
                    }
                }else{
                    printf("Triangle isn't valid!");
                }
                break;
            case 3:
                printf("Enter sides of the triangle: ");
                scanf("%d%d%d",&a,&b,&c);
                if(a<b+c && b<a+c && c<a+b){
                    if(a==b && a==c){
                        printf("Triangle is equilateral!");
                    }else{
                        printf("Triangle isn't equilateral!");
                    }
                }else{
                    printf("Triangle isn't valid!");
                }
                break;
            case 4:
                printf("Now, you are out from the program!");
                break;
            default:
                printf("Choose a correct option!");
        }
    }
    return 0;
}