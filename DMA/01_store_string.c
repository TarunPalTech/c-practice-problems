/* Define a function to input variable length string and store it in an array without memory wastage. */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* inputString();

int main(){
    char *str = inputString();
    printf("You entered %s!",str);
    free(str);
    return 0;
}

char* inputString(){
    char buffer[1000];
    printf("Enter your string:");
    fgets(buffer,1000,stdin);  // declaration of the fgets is in the stdio.h
    buffer[strcspn(buffer,"\n")]='\0';
    char *str = (char*)malloc(strlen(buffer)+1);
    if(str==NULL){
        printf("Memory can't be allocated!");
        exit(1);
    }
    strcpy(str,buffer);
    return str;
}