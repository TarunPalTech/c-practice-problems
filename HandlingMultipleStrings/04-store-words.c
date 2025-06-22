// Problem: Write a function to store each word of a string in a 2 dimensional char array.

#include<stdio.h>
#include<string.h>

int countWords(char str[]);
void getWordsFromString(char str[], char words[][20]);
int main(){
    char str[100] = "My name is Tarun Pal";
    int size = countWords(str);
    char words[size][20];
    getWordsFromString(str,words);
    for(int i=0;i<size;i++){
        printf("%s\n",words[i]);
    }
    return 0;
}
void getWordsFromString(char str[], char words[][20]){
    int j, start=0;
    for(int i=0;str[i];i++){
        while(str[i]==' ') i++;
        j=0;
        while(str[i]!=' ' && str[i]){
            words[start][j++]=str[i++];
        }
        words[start][j]='\0';
        start++;
    }
}
int countWords(char str[]){
    int i=0, count=0;
    while(str[i]){
        while(str[i]==' ') i++;
        if(str[i]){
            count++;
            while(str[i]!=' ' && str[i]){
                i++;
            }
        }
    }
    return count;
}