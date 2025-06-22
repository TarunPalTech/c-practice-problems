// 5. Write a function to extract a substring from a given string with specified start index (inclusive) and end index (exclusive), and store the extracted string in another char array. [ void extract_string(char *str, int start_index, int end_index, char *result); ]

#include<stdio.h>
#include<ctype.h>

void extract_string(char *p, int startIndex, int endIndex, char *result);
int main(){
    char str[200] = "Hi, this is Tarun Pal from meerganj, bareilly, uttar pradesh!";
    char result[200];
    int startIndex, endIndex;
    printf("Enter start index and end index:");
    scanf("%d%d",&startIndex,&endIndex);
    if(startIndex>=0 && endIndex<200){
        extract_string(str,startIndex,endIndex, result);
        printf("%s",result);
    }else{
        printf("Enter correct values!");
    }
    return 0;
}
void extract_string(char *p, int startIndex, int endIndex, char *result){
    int i=0;
    while(startIndex < endIndex){
        *(result+i) = *(p+startIndex);
        startIndex++;
        i++;
    }
    result[i]='\0';
}