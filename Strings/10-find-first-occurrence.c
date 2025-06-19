// Problem: Write a program to find first occurrence of a given character in a given.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int findFirstOccurrence(char [], char ch);
int main(){
    char str[50], ch;
    printf("Enter your string:");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    printf("Enter a character:");
    scanf("%c",&ch);
    printf("First Occurrence of the given character is at %d position!",findFirstOccurrence(str,ch));
    return 0;
}
int findFirstOccurrence(char str[],char ch){
    for(int i=0;str[i];i++){
        if(tolower(str[i])==tolower(ch)){
            return i;
        }
    }
    return -1;
}