// Problem: Write a function to find the highest salary employee from a given array of 10 employees. [Refer structure from question 1]

#include<stdio.h>
#include<string.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};
void inputEmployeeData(struct Employee *p);
void displayEmployeeData(struct Employee *p);
int getHighestSalary(struct Employee *p);

int main(){
    struct Employee E[10];
    inputEmployeeData(E);
    displayEmployeeData(E);
    int highestSlary = getHighestSalary(E);
    printf("Highest Salary is %d.",highestSlary);
    return 0;
}
void displayEmployeeData(struct Employee *p){
    for(int i=0;i<10;i++){
        printf("\nDetails of employee %d:\n",i+1);
        printf("\tID: %d\n",((p+i)->id));
        printf("\tName: %s\n",(p+i)->name);
        printf("\tSalary: %.2f\n",(p+i)->salary);
    }
}
int getHighestSalary(struct Employee *p){
    float temp = p->salary;
    for(int i=1;i<10;i++){
        if(temp<(p+i)->salary){
            temp=(p+i)->salary;
        }
    }
    return temp;
}
void inputEmployeeData(struct Employee *p){
    for(int i=0;i<10;i++){
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