// 6. Write a function to swap strings of two char arrays.


#include<stdio.h>
#include<string.h>

void swap(char *p, char *q);
int main(){
    char str1[]="Tarun Pal";
    char str2[]="Ravi Gangwar";
    swap(str1, str2);
    printf("String 1: %s\n",str1);
    printf("String 2: %s",str2);
    return 0;
}
void swap(char *p, char *q){
    char temp[50];
    strcpy(temp,p);
    strcpy(p,q);
    strcpy(q,temp);
}