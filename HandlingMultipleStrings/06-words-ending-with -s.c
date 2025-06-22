// Problem: Write a program to find words ending with a letter 's' and store each such word in a 2d char array.


#include<stdio.h>
#include<string.h>

void sortNames(char names[][20]);
void removeDulpicates(char names[][20]);
void findWordsEndingWithS(char names[][20], char words[][20]);
int main(){
    char names[10][20] = {"Paras", "Manav", "Nicolas", "James", "Pooran", "Raghav", "Charles", "Chris", "Surya", "Lewis"};
    char words[10][20] = {0};
    findWordsEndingWithS(names,words);
    for(int i=0;words[i][0];i++){
        printf("%s\n",words[i]);
    }
    return 0;
}
void findWordsEndingWithS(char names[][20], char words[][20]){
    removeDulpicates(names);
    int i=0, k=0;
    while(i<10 && names[i][0]!='\0'){
        int len = strlen(names[i])-1;
        if(names[i][len]=='s'){
            strcpy(words[k],names[i]);
            k++;
        }
        i++;
    }
}
void removeDulpicates(char names[][20]){
    sortNames(names);
    int i=0,j=1, size=10, k;
    while(i<size-1){
        j=i+1;
        while(j<size && strcmp(names[i],names[j])==0){
            for(k=j;k<size-1;k++){
                strcpy(names[k],names[k+1]);
            }
            names[size-1][0]='\0';
            size--;
        }
        i++;
    }
}
void sortNames(char names[][20]){
    char temp[20];
    for(int round=1;round<10;round++){
        for(int i=0;i<10-round;i++){
            if(strcmp(names[i],names[i+1])>0){
                /* 
                if(_stricmp(names[i], names[i+1]) > 0)  // Windows-specific
                if(strcasecmp(names[i],names[i+1])>0)  // On Linux/Unix
                => for case-insensitive comparision...
                */
                strcpy(temp,names[i]);
                strcpy(names[i],names[i+1]);
                strcpy(names[i+1],temp);
            }
        }
    }
}