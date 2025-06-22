// Problem: Write a function to check whether a pair of strings are anagram or not. Both the strings are stored in a 2d char array.


#include<stdio.h>
#include<string.h> // to use strlen function
#include<strings.h> // If you wan to use strcasecmp then include this header file in place of #include<string.h>
// gcc doesn't support _stricmp() method but this method is defined in the <string.h> file...
#include<ctype.h>

int isAnagram(char str[][20]);
void sortStrings(char str[][20]);
int main(){
    char str[2][20];
    printf("Enter string 1: ");
    fgets(str[0],20,stdin);
    str[0][strcspn(str[0],"\n")]='\0';
    printf("Enter string 2: ");
    fgets(str[1],20,stdin);
    str[1][strcspn(str[1],"\n")]='\0';
    int result = isAnagram(str);
    if(result > 0){
        printf("Strings are anagram!");
    }else if(result == 0){
        printf("String aren't anagram!");
    }else{
        printf("Strings are technically anagram but you entered the same strings!");
    }
    return 0;
}
int isAnagram(char str[][20]){
    if(strcasecmp(str[0],str[1])==0){
        return -1;
    }else if(strlen(str[0]) == strlen(str[1])){
        sortStrings(str);
        printf("%s\n",str[0]);
        printf("%s\n",str[1]);
        if(strcasecmp(str[0],str[1])==0){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}
void sortStrings(char str[][20]){
    int n=2, j=0;
    char temp;
    while(n>0){
        int length = strlen(str[j]);
        for(int round=1;round<length;round++){
            for(int i=0;i<length-round;i++){
                if(tolower(str[j][i])>tolower(str[j][i+1])){
                    temp=str[j][i];
                    str[j][i]=str[j][i+1];
                    str[j][i+1]=temp;
                }
            }
        }
        n--;
        j++;
    }
}