// Problem: Write a function to check whether a given string is palindrome or not.

#include<stdio.h>
#include<string.h>

void copyString(char str[], char copy[]);
void revString(char str[]);
int isPalindrome(char str[], int size);
int main(){
    char str[20];
    printf("Enter your string:");
    fgets(str,20,stdin);
    str[strcspn(str,"\n")]='\0';
    if(isPalindrome(str,20)){
        printf("String is Palindrome!");
    }else{
        printf("String isn't Palindrome!");
    }
    return 0;
}
int isPalindrome(char str[], int size){
    char copy[size];
    copyString(str,copy);
    revString(copy);
    if(strcmp(str,copy)==0){
        return 1;
    }else{
        return 0;
    }
}
void copyString(char str[], char copy[]){
    int i;
    for(i=0;str[i];i++){
        copy[i]=str[i];
    }
    copy[i]='\0';
}
void revString(char str[]){
    int start=0, end=strlen(str)-1;
    char temp;
    while(start<end){
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}