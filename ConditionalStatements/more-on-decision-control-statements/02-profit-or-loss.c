// Problem: Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

// Description: 
// This program asks the user to input the cost price (CP) and selling price (SP) of a product. 
// It then calculates the percentage of profit or loss based on the difference between SP and CP. 
// If SP > CP, it calculates profit percentage.
// If CP > SP, it calculates loss percentage.
// If both are equal, it prints "No profit or no loss".

#include<stdio.h>

int main(){
    float cp, sp;
    printf("Enter cost price and selling price:");
    scanf("%f%f",&cp,&sp);
    if(cp>sp){
        printf("Loss percentage is %.2f%%.",(cp-sp)/cp*100.0);
    }else if(sp>cp){
        printf("Profit percentage is %.2f%%.",(sp-cp)/cp*100.0);
    }else{
        printf("No profit or no loss!");
    }
    return 0;
}