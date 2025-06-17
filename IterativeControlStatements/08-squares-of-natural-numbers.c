// Problem: Write a program to print squares of the first 10 natural numbers.

// Description:
// This program prints the squares of the first 10 natural numbers using a while loop.
// It starts from 1 and goes up to 10. In each iteration, it prints the square of the current number (i*i).

#include<stdio.h>

int main(){
    int i=1;
    while(i<=10){
        printf("%d\t",i*i);
        i++;
    }
    return 0;
}

// #include<stdio.h>

// int main(){
//     int n=10;
//     while(n--){
//         printf("%d\t",(10-n)*(10-n));
//     }
//     return 0;
// }