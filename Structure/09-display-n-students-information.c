// Problem: Write a program to store information of n students and display them using structure.

#include<stdio.h>
#include<string.h>

struct Student{
    int roll_no;
    char name[20];
    float marks;
};
void inputData(struct Student *s, int n);
void displayData(struct Student *s, int n);

int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct Student s[n];
    inputData(s,n);
    displayData(s,n);
    return 0;
}
void displayData(struct Student *s, int n){
    for(int i=0;i<n;i++){
        printf("Details of student %d:\n",i+1);
        printf("\tRoll No: %d\n",(s+i)->roll_no);
        printf("\tName: %s\n",(s+i)->name);
        printf("\tMarks: %.2f\n",(s+i)->marks);
    }
}
void inputData(struct Student *s, int n){
    for(int i=0;i<n;i++){
        printf("\nEnter details for student %d:\n",i+1);
        printf("Enter roll no: ");
        scanf("%d",&(s+i)->roll_no);
        // getchar(); // not working while user enters an extra space accidently...
        while (getchar() != '\n'); // flush input buffer
        printf("Enter name:");
        fgets((s+i)->name,20,stdin);
        (s+i)->name[strcspn((s+i)->name,"\n")]='\0';
        printf("Enter marks:");
        scanf("%f",&(s+i)->marks);
    }
}