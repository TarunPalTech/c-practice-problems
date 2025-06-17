// Problem: Write a program to check whether the given number is even or odd using a bitwise operator.

// Description: & operator is the best method to solve this problem.
// Because;
// 0 & 0 => 0
// 0 & 1 => 0
// 1 & 0 => 0
// 1 & 1 => 1

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     if(n&1==1){
//         printf("Odd!");
//     }else{
//         printf("Even!");
//     }
//     return 0;
// }