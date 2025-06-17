// Problem: Write a program to print the first 10 natural numbers.

// Description: 
// This program prints the first 10 natural numbers (from 1 to 10) using a while loop.
// A counter variable is initialized to 1 and incremented until it reaches 10, printing each number along the way.

/* Using Single Variable */
// #include<stdio.h>

// int main(){
//     int n=10;
//     while(n--){
//         printf("%d\t",10-n);
//     }
//     return 0;
// }

/* Other Method */
#include<stdio.h>

int main(){
    int i=1;
    while(i<=10){
        printf("%d\t",i);
        i++;
    }
    return 0;
}