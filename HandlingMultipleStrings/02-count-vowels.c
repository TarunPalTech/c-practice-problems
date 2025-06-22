// Problem: Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void inputNames(char str[][20]);
int countVowels(char str[][20]);
int main(){
    char names[5][20];
    inputNames(names);
    printf("There are total %d vowels.",countVowels(names));
    return 0;
}
void inputNames(char str[][20]){
    for(int i=0;i<5;i++){
        printf("Enter name %d: ",i+1);
        fgets(str[i],20,stdin);
        str[i][strcspn(str[i],"\n")]='\0';
    }
}
int countVowels(char str[][20]){
    int count=0;
    for(int i=0;i<5;i++){
        for(int j=0;str[i][j];j++){
            char ch = tolower(str[i][j]);
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                count++;
            }
        }
    }
    return count;
}