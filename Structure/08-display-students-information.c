// Problem: Write a program to store information of 10 students and display them using structure.

#include<stdio.h>
#include<string.h>

struct Student{
    int roll_no;
    char name[20];
    float marks;
};
void inputData(struct Student *s);
void displayData(struct Student *s);

int main(){
    struct Student s[10];
    inputData(s);
    displayData(s);
    return 0;
}
void displayData(struct Student *s){
    for(int i=0;i<10;i++){
        printf("Details of student %d:\n",i+1);
        printf("\tRoll No: %d\n",(s+i)->roll_no);
        printf("\tName: %s\n",(s+i)->name);
        printf("\tMarks: %.2f\n",(s+i)->marks);
    }
}
void inputData(struct Student *s){
    for(int i=0;i<10;i++){
        printf("\nEnter details for student %d:\n",i+1);
        printf("Enter roll no: ");
        scanf("%d",&(s+i)->roll_no);
        getchar();
        printf("Enter name:");
        fgets((s+i)->name,20,stdin);
        (s+i)->name[strcspn((s+i)->name,"\n")]='\0';
        printf("Enter marks:");
        scanf("%f",&(s+i)->marks);
    }
}