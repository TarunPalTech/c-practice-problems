// Problem: Write a program to count spaces in a given string.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int countSpaces(char str[]);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    printf("There are total %d spaces!",countSpaces(str));
    return 0;
}
int countSpaces(char str[]){
    int count=0;
    for(int i=0;str[i];i++){
        if(str[i]==' '){
            count++;
        }
    }
    return count;
}