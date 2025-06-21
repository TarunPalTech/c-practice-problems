// Problem: Write a function to do case insensitive comparison of two strings.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int stringComparision(char str1[], char str2[]);
int main(){
    char str1[50], str2[50];
    printf("Enter your string 1:");
    fgets(str1,50,stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Enter your string 2:");
    fgets(str2,50,stdin);
    str2[strcspn(str2,"\n")]='\0';
    int result = stringComparision(str1, str2);
    if(result < 0){
        printf("String 1 comes before string 2!");
    }else if(result > 0){
        printf("String 2 comes before string 1!");
    }else{
        printf("Both are same!");
    }
    return 0;
}
int stringComparision(char str1[], char str2[]){
    int i=0;
    while(str1[i] && str2[i]){
        char ch1=tolower(str1[i]);
        char ch2=tolower(str2[i]);
        if(ch1<ch2){
            return -1;
        }else if(ch1>ch2){
            return 1;
        }
        i++;
    }
    if(str1[i])
        return 1;
    else if(str2[i])
        return -1;
    else
        return 0;
}