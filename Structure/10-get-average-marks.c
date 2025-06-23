// Problem: Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.

#include<stdio.h>
#include<string.h>

struct Students{
    int roll_no;
    char name[20];
    float chem_marks;
    float math_marks;
    float phy_marks;
};

void displayData(struct Students *s);
void inputData(struct Students *s);
float getPercentage(struct Students *s, int student);
int main(){
    struct Students s[5];
    inputData(s);
    displayData(s);
    return 0;
}
float getPercentage(struct Students *s, int student){
    return ((s + student)->chem_marks + (s + student)->math_marks + (s+student)-> phy_marks)/300*100.0;
}
void inputData(struct Students *s){
    for(int i=0;i<5;i++){
        printf("\nEnter details of student %d:\n",i+1);
        printf("Enter roll no: ");
        scanf("%d",&(s+i)->roll_no);
        while(getchar()!='\n');
        printf("Enter name: ");
        fgets((s+i)->name,20,stdin);
        printf("Enter marks of chemistry: ");
        scanf("%f",&(s+i)->chem_marks);
        printf("Enter marks of maths: ");
        scanf("%f",&(s+i)->math_marks);
        printf("Enter marks of physics: ");
        scanf("%f",&(s+i)->phy_marks);
    }
}
void displayData(struct Students *s){
    for(int i=0;i<5;i++){
        printf("\nDetails of student %d:\n",i+1);
        printf("\tRoll No: %d\n",(s+i)->roll_no);
        printf("\tName: %s\n",(s+i)->name);
        printf("\tMarks in Chemistry: %.2f\n",(s+i)->chem_marks);
        printf("\tMarks in Maths: %.2f\n",(s+i)->math_marks);
        printf("\tMarks in Physics: %.2f\n",(s+i)->phy_marks);
        printf("\nPercentage of Student %d is %.2f!\n",i+1,getPercentage(s,i));
    }
}