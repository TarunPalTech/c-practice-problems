// Problem: WAP to take time as an input in below given format and convert the time format and display the result as given below:
// User Input time format - "HH:MM"
// Output format - "HH hour and MM Minute"

// Descrption: 

#include<stdio.h>

int main(){
    int h, m;
    printf("Enter time in the given format - (HH:MM): ");
    scanf("%d:%d",&h,&m);
    printf("%02d %s and %02d %s",h, h==1?"Hour":"Hours",m, m==1?"Minute":"Minutes");
    return 0;
}