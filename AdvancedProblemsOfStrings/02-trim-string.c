// Problem: Write a function to trim a string (removing leading spaces from both the ends).

#include<stdio.h>
#include<string.h>

void removeLeadingSpaces(char str[]);
int main(){
    char str[50] = "    TARUN PAL    ";
    removeLeadingSpaces(str);
    printf("Now, updated string is %s.",str);
    return 0;
}
void removeLeadingSpaces(char str[]){
    int i=0, start, end;
    for(start=0;str[start]==' ';start++);
    for(end=strlen(str)-1;str[end]==' ';end--);
    while(start<=end){
        str[i]=str[start];
        i++;
        start++;
    }
    str[i]='\0';
}