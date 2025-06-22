// Problem: A 2d array is full with 10 email ids. Write a function to find how many of them belongs to gmail.com

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int matchedEmails(char emails[][40], char str[]);
int main(){
    char emails[10][40] = {
        "alice@gmail.com",
        "bob@yahoo.com",
        "charlie@outlook.com",
        "david@gmail.com",
        "emma@protonmail.com",
        "frank@gmail.com",
        "grace@icloud.com",
        "harry@gmail.com",
        "ivy@zoho.com",
        "jack@aol.com"
    };
    char str[]="gmail.com";
    printf("There are total %d emails endswith gmail.com!",matchedEmails(emails,str));
    return 0;
}
int matchedEmails(char emails[][40], char str[]){
    int i, j, k, count=0;
    for(int n=0;n<10;n++){
        i=0;
        while(emails[n][i]){
            if(emails[n][i]=='@'){
                j=0;
                k=i+1;
                while(emails[n][k] && emails[n][k]==str[j]){
                    k++;
                    j++;
                }
                if(emails[n][k]=='\0' && str[j]=='\0'){
                    count++;
                    break;
                }
            }
            i++;
        }
    }
    return count;
}