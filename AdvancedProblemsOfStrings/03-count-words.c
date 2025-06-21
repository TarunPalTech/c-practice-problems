// Problem: Write a function to count words in a given string.

#include<stdio.h>
#include<string.h>

int countWords(char str[]);
int main(){
    char str[50] = "  My    name   is   Tarun   Pal";
    printf("There are total %d words.",countWords(str));
    return 0;
}
int countWords(char str[]){
    int count=0, i=0;
    while(str[i]){
        if(str[i]!=' '){
            count++;
            while(str[i]!=' ' && str[i]){
                i++;
            }
        }else{
            i++;
        }
    }
    return count;
}