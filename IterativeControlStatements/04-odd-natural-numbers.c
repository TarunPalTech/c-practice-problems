// Problem: Write a program to print the first 10 odd natural numbers.

// Description:
// This program uses a while loop to print the first 10 odd natural numbers.
// It starts from 1 and increments the counter by 2 in each iteration (1, 3, 5, ..., 19),
// which results in printing the first 10 odd numbers.

#include<stdio.h>

int main(){
    int i=1;
    while(i<=19){
        printf("%d\t",i);
        i+=2;
    }
    return 0;
}


/* Using Single Variable */
// #include<stdio.h>

// int main(){
//     int n=10;
//     while(n--){
//         printf("%d\t",19-n*2);
//     }
//     return 0;
// }