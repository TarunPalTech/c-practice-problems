// Problem: Write a program to reverse a string.

#include<stdio.h>
#include<string.h>

void reverseString(char str[]);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    reverseString(str);
    printf("Now, String is %s.",str);
    return 0;
}
void reverseString(char str[]){
    int start=0, end=strlen(str)-1, temp;
    while(start<end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}