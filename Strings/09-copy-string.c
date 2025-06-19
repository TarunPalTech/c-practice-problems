// Problem: Write a program in C to copy one string to another char array.

#include<stdio.h>
#include<string.h>

void copyString(char [], char []);
int main(){
    char str1[50], str2[50];
    printf("Enter your string:");
    fgets(str1,50,stdin);
    str1[strcspn(str1,"\n")]='\0';
    copyString(str1,str2);
    printf("%s",str2);
    return 0;
}
void copyString(char str1[], char str2[]){
    for(int i=0;str1[i];i++){
        str2[i]=str1[i];
    }
}