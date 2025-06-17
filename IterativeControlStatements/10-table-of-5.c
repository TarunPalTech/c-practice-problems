// Problem: Write a program to print a table of 5.

// Description:
// This program prints the multiplication table of 5 using a while loop.
// It starts from 1 and goes up to 10. In each iteration, it multiplies 5 by the current value of the loop counter and prints the result.


#include<stdio.h>

int main(){
    int i=1;
    while(i<=10){
        printf("%d\t",i*5);
        i++;
    }
    return 0;
}

/* Using Single Variable */
// #include<stdio.h>

// int main(){
//     int n=10;
//     while(n--){
//         printf("%d\t",(10-n)*5);
//     }
//     return 0;
// }