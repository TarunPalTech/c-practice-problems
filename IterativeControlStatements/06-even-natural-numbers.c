// Problem: Write a program to print the first 10 even natural numbers.

// Description:
// This program prints the first 10 even natural numbers using a while loop.
// It starts from 2 and increments by 2 in each iteration (2, 4, 6, ..., 20).
// The loop continues as long as the current number is less than or equal to 20.

#include<stdio.h>

int main(){
    int i=2;
    while(i<=20){
        printf("%d\t",i);
        i+=2;
    }
    return 0;
}

/* Other Method */
// #include<stdio.h>

// int main(){
//     int n=10;
//     while(n--){
//         printf("%d\t",20-n*2);
//     }
//     return 0;
// }
