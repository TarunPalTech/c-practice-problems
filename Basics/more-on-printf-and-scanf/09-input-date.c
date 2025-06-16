// Problem: Write a program to take date as an input in below given format and convert the date format and display the result as given below:
// User Input date format - "DD/MM/YYYY" (16/06/2025)
// Output format - "Day - DD, Month - MM, Year -YYYY" (Day - 16, Month - 06, Year - 2025)

#include<stdio.h>

int main(){
    int d,m,y;
    printf("Enter date in the given format - (DD/MM/YYYY):");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("Day - %d, Month - %d, Year - %d",d,m,y);  // %02d is used to pad single-digit days/months with a 0 (e.g., 5 → 05), matching your output format.
    return 0;
}