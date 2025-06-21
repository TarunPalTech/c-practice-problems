// Problem: Write a function to make first character of each word of the string capital.


#include<stdio.h>
#include<string.h>
#include<ctype.h>

void convertFirstLetterIntoUpper(char str[]);
int main(){
    char str[100];
    printf("Enter your string: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    convertFirstLetterIntoUpper(str);
    printf("%s",str);
    return 0;
}
void convertFirstLetterIntoUpper(char str[]){
    for(int i=0;str[i];i++){
        if(i==0){
            str[i]=toupper(str[i]);
        }else if(str[i-1]==' ' && str[i]!=' '){
            str[i]=toupper(str[i]);
        }
    }
}