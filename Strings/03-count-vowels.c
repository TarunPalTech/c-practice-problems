// Problem: Write a program to count vowels in a given string.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int countVowels(char str[]);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    printf("There are total %d vowels!",countVowels(str));
    return 0;
}
int countVowels(char str[]){
    int count=0;
    for(int i=0;str[i];i++){
        char ch = tolower(str[i]);  // Remember this point
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            count++;
        }
    }
    return count;
}