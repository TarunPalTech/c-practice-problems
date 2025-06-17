// Problem: Write a program to print the first 10 odd natural numbers in reverse order.

// Description:
// This program prints the first 10 odd natural numbers in reverse order using a while loop.
// The first 10 odd natural numbers are: 1, 3, 5, 7, 9, 11, 13, 15, 17, 19.
// To print them in reverse, the loop starts from 19 and decrements by 2 until it reaches 1.

#include<stdio.h>

int main(){
    int i=19;
    while(i>=1){
        printf("%d\t",i);
        i-=2;
    }
    return 0;
}

// #include<stdio.h>

// int main(){
//     int n=10;
//     while(n--){
//         printf("%d\t",(n*2+2)-1);
//     }
//     return 0;
// }