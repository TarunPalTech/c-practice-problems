// 4. Write a function to convert a given string into lowercase.

#include<stdio.h>
#include<ctype.h>

void convertIntoLowerCase(char *p);
int main(){
    char str[] = "Hi, this is Tarun Pal from meerganj, bareilly, uttar pradesh!";
    convertIntoLowerCase(str);
    printf("%s",str);
    return 0;
}
void convertIntoLowerCase(char *p){
    int i=0;
    char temp;
    while(*(p+i)){
        temp = tolower(*(p+i));
        *(p+i)=temp;
        i++;
    }
}