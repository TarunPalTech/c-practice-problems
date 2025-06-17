// Problem: Write a program to print the first 10 natural numbers in reverse order.

// Description:
// This program uses a while loop to print the first 10 natural numbers in reverse order (from 10 to 1).
// A counter variable is initialized to 10 and is decremented by 1 in each iteration.
// The loop continues until the counter reaches 1.

#include<stdio.h>

int main(){
    int i=10;
    while(i>=1){
        printf("%d\t",i);
        i--;
    }
    return 0;
}


/* Using Single Variable */
// #include<stdio.h>

// int main(){
//     int n=10;
//     while(n--){
//         printf("%d\t",n+1);
//     }
//     return 0;
// }