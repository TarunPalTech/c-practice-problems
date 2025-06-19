// Problem: Write a function to find character in a given string between specified indices (start index(inclusive) and end index(exclusive)).

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int findCharacter(char [], char, int, int);
int main(){
    char str[20];
    printf("Enter your string: ");
    fgets(str,20,stdin);
    str[strcspn(str,"\n")]='\0';
    int start,end;
    printf("Enter range:");
    scanf("%d%d",&start,&end);
    char ch;
    printf("Enter a character:");
    scanf(" %c",&ch);
    if(findCharacter(str,ch,start,end)==1){
        printf("Character found!");
    }else{
        printf("Character not found!");
    }
    return 0;
}
int findCharacter(char str[], char ch, int start, int end){
    ch=tolower(ch);
    while(start<end){
        if(tolower(str[start])==tolower(ch)){
            return 1;
        }
        start++;
    }
    return -1;
}