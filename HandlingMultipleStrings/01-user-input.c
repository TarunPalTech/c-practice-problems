// Problem: Write a function to store strings, taken from user, to the given 2d char array.

#include<stdio.h>
#include<string.h>

void inputNames(char str[][20]);
int main(){
    char names[3][20];
    inputNames(names);
    for(int i=0;i<3;i++){
        printf("%s\n",names[i]);
    }
    return 0;
}
void inputNames(char str[][20]){
    for(int i=0;i<3;i++){
        printf("Enter name %d: ",i+1);
        fgets(str[i],20,stdin);
        str[i][strcspn(str[i],"\n")]='\0';
    }
}