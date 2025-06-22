// 2. Write a function to search all occurrences of a given character in a given string.

#include<stdio.h>

void searchOccurrences(char *p, char ch);
int main(){
    char str[] = "Hi, this is Tarun Pal from meerganj, bareilly, uttar pradesh!";
    searchOccurrences(str, 'a');
    return 0;
}
void searchOccurrences(char *p, char ch){
    int i=0;
    while(*(p+i)){
        if(ch == *(p+i)){
            printf("%d\t",i);
        }
        i++;
    }
}