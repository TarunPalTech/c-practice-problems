// Problem: Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit and loss earned upon selling 25 bananas.

// Description: This program calculates the total cost and selling price for 25 bananas based on prices per dozen, and then determines whether a profit or loss was made.


#include<stdio.h>

int main(){
    float cp, sp;
    printf("Enter cost and selling price of 1 dozen bananas:");
    scanf("%f%f",&cp,&sp);
    cp = (cp/12) * 25;
    sp = (sp/12) * 25;
    if(cp > sp){
        printf("Loss is %f Rs.",(cp-sp));
    }else if(sp > cp){
        printf("Profit is %f Rs.",(sp-cp));
    }else{
        printf("No profit or no loss!");
    }
}