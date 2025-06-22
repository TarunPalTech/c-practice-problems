// 3. Write a function to convert a given string into uppercase.

#include<stdio.h>
#include<ctype.h>

void convertIntoUpperCase(char *p);
int main(){
    char str[] = "Hi, this is Tarun Pal from meerganj, bareilly, uttar pradesh!";
    convertIntoUpperCase(str);
    printf("%s",str);
    return 0;
}
void convertIntoUpperCase(char *p){
    int i=0;
    char temp;
    while(*(p+i)){
        temp = toupper(*(p+i));
        *(p+i)=temp;
        i++;
    }
}