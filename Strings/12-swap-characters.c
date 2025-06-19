// Problem: Write a function to swap two characters of a given string with specified indices.

#include<stdio.h>
#include<string.h>

void swapCharacters(char [], int, int);
int main(){
    char str[20];
    printf("Enter youe string:");
    fgets(str,20,stdin);
    str[strcspn(str,"\n")]='\0';
    int i1, i2;
    printf("Enter two indices:");
    scanf("%d%d",&i1,&i2);
    swapCharacters(str,i1,i2);
    printf("Now, string is %s.",str);
    return 0;
}
void swapCharacters(char str[], int i1, int i2){
    char temp;
    temp=str[i1];
    str[i1]=str[i2];
    str[i2]=temp;
}