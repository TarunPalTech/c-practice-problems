// Problem: Write a function to make acronym name from a given name. For example, "Ramesh Chand Tiwari" becomes "R C Tiwari", "Bhavesh Gupta" becomes "B Gupta"

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int countWord(char str[]);
void makeAcronymName(char str[]);
int main(){
    char str[100];
    printf("Enter your string: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    makeAcronymName(str);
    printf("%s",str);
    return 0;
}
void makeAcronymName(char str[]){
    int n = countWord(str)-1; // Number of initials to extract
    int i=0, start=0;
    char temp;

     // Extract initials for first n words
    while(n>0 && str[i]){
        while(str[i]==' ') i++;  // Skip spaces
        if(str[i]!=' ' && str[i]){
            temp=str[i];  // Save the first character of the word
            /* 
               ❗ NOTE:
               Do NOT write the character directly here using:
               str[start++] = str[i++];
               Because it causes early overwriting.
               You might overwrite useful data before skipping the word.
               This cost me over 2 hours to debug!
            */
            n--;

            // Skip the entire word
            while(str[i]!=' ' && str[i]){
                i++;
            }
        }

        // Write the saved initial to the new position (in uppercase)
        str[start++]=toupper(temp);
        str[start++]=' ';
    }

    // Skip any remaining spaces before the last word
    while (str[i] == ' ') i++;

    // Copy and convert the last word to uppercase
    while(str[i]){
        str[start++]=toupper(str[i++]);
    }
    str[start]='\0';  // Null-terminate the modified string
}
int countWord(char str[]){
    int i=0, count=0;
    while(str[i]){
        while(str[i]==' ') i++;
        if(str[i]!=' ' && str[i]){
            count++;
            while(str[i]!=' ' && str[i]){
                i++;
            }
        }
    }
    return count;
}