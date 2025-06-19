// Problem: Write a function to compare two strings.


#include<stdio.h>
#include<string.h>

int compareStrings(char [], char []);
int main(){
    char str1[50],str2[50];
    printf("Enter string 1: ");
    fgets(str1,50,stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Enter string 2: ");
    fgets(str2,50,stdin);
    str2[strcspn(str2,"\n")]='\0';
    int result = compareStrings(str1, str2);
    if(result==0){
        printf("Both are same!");
    }else if(result<0){
        printf("String 1 comes before string 2!");
    }else{
        printf("String 2 comes before String 1!");
    }
    return 0;
}
int compareStrings(char str1[], char str2[]){
    int i=0;
    while(1){
        if(str1[i]=='\0' && str2[i]=='\0'){
            return 0;
        }else if(str1[i]==str2[i]){
            i++;
        }else if(str1[i]<str2[i]){
            return -1;
        }else{
            return 1;
        }
    }
}