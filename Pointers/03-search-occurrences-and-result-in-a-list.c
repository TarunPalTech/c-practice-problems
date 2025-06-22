// Result of search is a list of indices to be stored in the given array. [void search_all_occurrences (char *str, char ch, int *arr); ]

// #include<stdio.h>

// void searchOccurrences(char *p, char ch, int *q);
// int main(){
//     char str[] = "Hi, this is Tarun Pal from meerganj, bareilly, uttar pradesh!";
//     int arr[100] = {0};
//     searchOccurrences(str, 'a',arr);
//     for(int i=0;arr[i]!=-1;i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }
// void searchOccurrences(char *p, char ch, int *q){
//     int i=0,j=0;
//     while(*(p+i)){
//         if(ch == *(p+i)){
//             *(q+j) = i;
//             j++;
//         }
//         i++;
//     }
//     *(q+j) = -1;
// }