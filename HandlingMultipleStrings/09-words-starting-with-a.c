// Problem: Write a function to store all the words in a given string which are starting from 'a', in a two dimensional char array.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int countWords(char str[]);
void storeWordsStartsWithA(char str[], char words[][20]);
int main(){
    char str[200] = "An apple a day keeps anxiety away. Always aim at achieving amazing and ambitious aspirations";
    int size = countWords(str);
    char words[size][20];
    storeWordsStartsWithA(str,words);
    for(int i=0;i<size && words[i][0];i++){
        printf("%s,\n",words[i]);
    }
    return 0;
}
void storeWordsStartsWithA(char str[], char words[][20]){
    int i=0,k=0,j=0;
    while(str[i]){
        while(str[i]==' ') i++;
        if(str[i]=='\0') break;

        j=0;
        if(str[i]=='a' || str[i]=='A'){
            while(str[i]!=' ' && str[i]){
                words[k][j++]=str[i++];
            }
            words[k][j]='\0';
            k++;
        }else{
            while(str[i]!=' ' && str[i]){
                i++;
            }
        }
    }
    while(k<15){
        words[k][0]='\0';
        k++;
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