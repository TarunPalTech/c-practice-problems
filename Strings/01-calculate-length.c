// Problem: Write a program to calculate the length of the string. (without using builtin method)

#include<stdio.h>
#include<string.h>

int calculateLength(char str[]);
int main(){
    char str[20];
    printf("Enter your name:");
    fgets(str,20,stdin);
    printf("Length is %d.",calculateLength(str));
    return 0;
}
int calculateLength(char str[]){
    int length;
    str[strcspn(str,"\n")]='\0';
    for(length=0;str[length];length++);
    return length;
}