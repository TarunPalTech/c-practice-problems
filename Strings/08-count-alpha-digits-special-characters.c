// Problem: Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>
#include<string.h>

void countDifferentCharacters(char str[]);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    countDifferentCharacters(str);
    return 0;
}
void countDifferentCharacters(char str[]){
    int alphabet=0, digits=0, specialCharacter=0;
    for(int i=0;str[i];i++){
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
            alphabet++;
        }else if(str[i]>=48 && str[i]<=57){
            digits++;
        }else{
            specialCharacter++;
        }
    }
    printf("Alphabets are %d.\n",alphabet);
    printf("Digits are %d.\n",digits);
    printf("Special Characters are %d.",specialCharacter);
}