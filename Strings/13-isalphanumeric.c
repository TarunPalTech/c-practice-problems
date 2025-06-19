// Problem: Write a function to check whether a given string is an alphanumeric string or not. (Alphanumeric string must contain at least one alphabet and one digit)

#include<stdio.h>
#include<string.h>

int isAlphanumeric(char []);
int main(){
    char str[20];
    printf("Enter your string: ");
    fgets(str,20,stdin);
    str[strcspn(str,"\n")]='\0';
    int status = isAlphanumeric(str);
    if(status==1){
        printf("Number is alphanumeric!");
    }else{
        printf("Number isn't alphanumeric!");
    }
    return 0;
}
int isAlphanumeric(char str[]){
    char digit=0, alpha=0;
    for(int i=0;str[i];i++){
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)){
            alpha=1;
        }else if(str[i]>=48 && str[i]<=57){
            digit=1;
        }
    }
    if(digit==1 && alpha==1){
        return 1;
    }else{
        return -1;
    }
}