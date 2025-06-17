// Problem: Write a program to print India 5 times on the screen.

// Description: 
// This program uses a while loop to print the word "India" five times.
// A counter variable is initialized to 5, and the loop runs until the counter becomes 0.
// In each iteration, it prints "India!" and decrements the counter.


/* Using Single Variable */
// #include<stdio.h>

// int main(){
//     int n=5;
//     while(n--){
//         printf("India!\n");
//     }
//     return 0;
// }

/* Other method */

#include<stdio.h>

int main(){
    int i=1;
    while(i<=5){
        printf("India\n");
        i++;
    }
    return 0;
}