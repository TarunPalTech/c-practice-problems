// Problem: Write a function to concatenate two strings.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void concat(char str1[], char str2[], char concatStr[]);
int main(){
    char str1[100] = "My name is ", str2[100] = "Tarun Pal!", concatStr[200];
    concat(str1,str2,concatStr);
    printf("%s",concatStr);
    return 0;
}
void concat(char str1[], char str2[], char concatStr[]){
    int i, j;
    for(i=0;str1[i];i++){
        concatStr[i]=str1[i];
    }
    for(j=0;str2[j];j++){
        concatStr[i]=str2[j];
        i++;
    }
    concatStr[i] = '\0';  
}