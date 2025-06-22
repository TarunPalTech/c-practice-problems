// Problem: Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void sortCities(char cities[][20]);
void inputNames(char str[][20]);
int main(){
    char names[10][20];
    inputNames(names);
    sortCities(names);
    for(int i=0;i<10;i++){
        printf("%d. %s\n",i+1, names[i]);
    }
    return 0;
}
void sortCities(char cities[][20]){
    char temp[20];
    for(int round=1;round<10;round++){
        for(int i=0;i<10-round;i++){
            if(strcmp(cities[i],cities[i+1])>0){
                /* 
                if(_stricmp(cities[i], cities[i+1]) > 0)  // Windows-specific
                if(strcasecmp(cities[i],cities[i+1])>0)  // On Linux/Unix
                => for case-insensitive comparision...
                */
                strcpy(temp,cities[i]);
                strcpy(cities[i],cities[i+1]);
                strcpy(cities[i+1],temp);
            }
        }
    }
}
void inputNames(char str[][20]){
    for(int i=0;i<10;i++){
        printf("Enter name %d: ",i+1);
        fgets(str[i],20,stdin);
        str[i][strcspn(str[i],"\n")]='\0';
    }
}