// Problem: Write a function to sort employees according to their salaries [refer structure from question 1]

#include<stdio.h>
#include<string.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};
void inputEmployeeData(struct Employee *p);
void displayEmployeeData(struct Employee *p);
void sortBasesOnSalaries(struct Employee *p);

int main(){
    struct Employee E[10];
    inputEmployeeData(E);
    sortBasesOnSalaries(E);
    displayEmployeeData(E);
    return 0;
}
void displayEmployeeData(struct Employee *p){
    for(int i=0;i<5;i++){
        printf("\nDetails of employee %d:\n",i+1);
        printf("\tID: %d\n",((p+i)->id));
        printf("\tName: %s\n",(p+i)->name);
        printf("\tSalary: %.2f\n",(p+i)->salary);
    }
}
void sortBasesOnSalaries(struct Employee *p){
    struct Employee temp;
    for(int round=1;round<5;round++){
        for(int i=0;i<5-round;i++){
            if((p+i)->salary  > (p+i+1)->salary){
                temp=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=temp;
            }
        }
    }
}
void inputEmployeeData(struct Employee *p){
    for(int i=0;i<5;i++){
        printf("\nEnter details for employee %d: \n",i+1);
        printf("Enter Id: ");
        scanf("%d",&((p+i)->id));
        getchar();
        printf("Enter name: ");
        fgets((p+i)->name,20,stdin);
        (p+i)->name[strcspn((p+i)->name,"\n")]='\0';
        printf("Enter salary: ");
        scanf("%f",&((p+i)->salary));
    }
}