// Problem: Write a program to count the occurrence of a given character in a given string.

// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>

int countOccurrence(char str[], char ch);
int main(){
    char str[50];
    printf("Enter your string:");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    char ch;
    printf("Enter your character:");
    scanf("%c",&ch);
    printf("There are total %d occurrences!",countOccurrence(str,ch));
    return 0;
}
int countOccurrence(char str[], char ch){
    int count=0;
    for(int i=0;str[i];i++){
        if(tolower(ch)==tolower(str[i])){
            count++;
        }
    }
    return count;
}