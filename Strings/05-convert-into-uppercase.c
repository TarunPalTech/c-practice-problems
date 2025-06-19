// Problem: Write a program to convert a given string into uppercase.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertStringIntoUppercase(char str[]);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    convertStringIntoUppercase(str);
    printf("Now, String is %s.",str);
    return 0;
}
void convertStringIntoUppercase(char str[]){
    for(int i=0;str[i];i++){
        str[i]=toupper(str[i]);
    }
}