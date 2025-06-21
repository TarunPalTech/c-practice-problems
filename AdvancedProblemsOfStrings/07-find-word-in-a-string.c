// Problem: Write a function to find a word in a given string.


#include<stdio.h>
#include<string.h>
#include<ctype.h>

int findWord(char str[],char word[]);
int main(){
    char str[100] = "My name is Tarun Pal", word[10]= "is";
    // printf("Enter your string: ");
    // fgets(str,50,stdin);
    // str[strcspn(str,"\n")]='\0';
    if(findWord(str,word)){
        printf("Word exists!");
    }else{
        printf("Word doesn't exist!");
    }
    return 0;
}
int findWord(char str[],char word[]){
    int i=0, j, wordLength, length = strlen(word);
    while(str[i]){
        while(str[i]==' '){
            i++;
        }
        wordLength=0;
        int temp=i;
        while(str[i]!=' ' && str[i]){
            i++;
            wordLength++;
        }
        
        if(wordLength == length){
            i=temp;
            j=0;
            while(word[j] == str[i] && word[j]){
                // printf("%c -  %c",str[i],word[j]);
                j++;
                i++;
            }
            if(j==wordLength){
                return 1;
            }
        }
        i++;
    }
    return 0;
}