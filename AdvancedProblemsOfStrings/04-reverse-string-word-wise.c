// Problem: Write a function to reverse a string word wise. (For example if the given string is "My name is Tarun Pal" then the resulting string should be "Services Education Mysirg")

#include<stdio.h>
#include<string.h>

void revString(char str[]);
void revWords(char []);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    revWords(str);
    printf("%s",str);
    return 0;
}
void revWords(char str[]){
    revString(str);
    int i=0, start, end;
    char temp;
    while(str[i]){
        while(str[i]==' '){
            i++;
        }
        start=i;
        while(str[i]!=' ' && str[i]!='\0'){
            i++;
        }
        end=i-1;
        while(start<end){
            temp=str[start];
            str[start]=str[end];
            str[end]=temp;
            start++;
            end--;
        }
    }
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