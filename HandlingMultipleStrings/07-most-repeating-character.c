// Problem: Write a function to return the most repeating character in a list of strings.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void findMostRepeatingCharacter(char names[][20]);
int main(){
    char names[10][20] = {"Paras", "Manav", "Nicolas", "James", "Pooran", "Raghav", "Charles", "Chris", "Surya", "Lewis"};
    findMostRepeatingCharacter(names);
    return 0;
}
void findMostRepeatingCharacter(char names[][20]){
    char characters[26] = {0}, ch;
    for(int i=0;i<10;i++){
        for(int j=0;names[i][j];j++){
            ch = tolower(names[i][j]);
            if(ch>='a' && ch<='z'){
                characters[tolower(ch)-97]++;
            }
        }
    }
    int greatest = characters[0];
    int i, temp=0;
    for(i=1;i<26;i++){
        if(greatest<characters[i]){
            greatest=characters[i];
            temp=i;
        }
    }
    printf("The most repeating character is %c.",temp+97);
}