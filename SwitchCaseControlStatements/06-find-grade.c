// Problem: Program to find and display grade obtained by a student in a test. Grading specifications are as follows:
// Marks from 90 to 100: Grade A
// Marks from 80 to less than 90: Grade B
// Marks from 70 to less than 80: Grade C
// Marks from 60 to less than 70: Grade D
// Marks from 50 to less than 60: Grade E
// Marks below 50: Grade F
// Marks greater than 100 or less than 0: Invalid Marks

#include<stdio.h>

int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    switch(marks){
        case 90 ... 100:
            printf("Grade A");
            break;
        case 80 ... 89:
            printf("Grade B");
            break;
        case 70 ... 79:
            printf("Grade C");
            break;
        case 60 ... 69:
            printf("Grade D");
            break;
        case 50 ... 59:
            printf("Grade E");
            break;
        case 1 ... 49:
            printf("Grade F");
            break;
        default:
            printf("Invalid Marks!");
    }
    return 0;
}