// Problem: Write a function to count frequency of each character of the given string.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void sort(char str[]);
void countFrequency(char str[]);
int main(){
    char str[50];
    printf("Enter your string: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    countFrequency(str);
    return 0;
}
void countFrequency(char str[]){
    sort(str);
    int i = 0, j = 1;
    while(str[i]){
        while(tolower(str[i])==tolower(str[j]) && str[j]){
            j++;
        }
        if(str[i]!=' ')
            printf("%c - %d\n",tolower(str[i]),j-i);
        i=j;
        j=i+1;
    }
}
void sort(char str[]){
    char temp;
    int length = strlen(str);
    for(int round=1;round<length;round++){
        for(int i=0;i<length-round;i++){
            if(tolower(str[i])>tolower(str[i+1])){
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
            }
        }
    }
}