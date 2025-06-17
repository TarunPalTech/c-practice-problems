// Problem: Write a program to print the first 10 even natural numbers in reverse order.

// Description:
// This program prints the first 10 even natural numbers in reverse order using a while loop.
// Even natural numbers are: 2, 4, 6, ..., 20.
// To reverse the order, the loop starts from 20 and decreases by 2 until it reaches 2.

#include<stdio.h>

int main(){
    int i=20;
    while(i>=2){
        printf("%d\t",i);
        i-=2;
    }
    return 0;
}

/* Using Single Variable */
// #include<stdio.h>

// int main(){
//     int n=10;
//     while(n--){
//         printf("%d\t",n*2+2);
//     }
//     return 0;
// }