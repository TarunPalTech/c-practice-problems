// Problem: Write a function to remove duplicate names stored in the list of names stored in a 2d char array.

#include<stdio.h>
#include<string.h>

void sortCities(char cities[][20]);
void removeDulpicates(char names[][20]);
int main(){
    char names[10][20] = {"Delhi", "Jaipur", "Lucknow", "Patna", "Bhopal", "Delhi", "Lucknow", "Delhi", "Gurugram", "Noida"};
    removeDulpicates(names);
    for(int i=0;names[i][0];i++){
        printf("%s\n",names[i]);
    }
    return 0;
}
void removeDulpicates(char names[][20]){
    sortCities(names);
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