// Problem: Write a function to take input employee data from the user. [ Refer structure from question 1]


#include<stdio.h>
#include<string.h>

struct Employee inputEmployeeData(struct Employee E,int emp_no);
struct Employee {
    int id;
    char name[20];
    float salary;
};
int main(){
    struct Employee E1, E2;
    E1 = inputEmployeeData(E1, 1);
    E2 = inputEmployeeData(E2, 2);
    displayEmployeeData(E1, 1);
    displayEmployeeData(E2, 2);
    return 0;
}
struct Employee inputEmployeeData(struct Employee E,int emp_no){
    printf("Enter details of the employee %d:\n",emp_no);
    printf("Enter ID of the Employee: ");
    scanf("%d",&E.id);
    getchar();  // getchar(); is used to consume leftover newline after scanf(), otherwise fgets() will read it instead of waiting for name input.
    printf("Enter name of the employee: ");
    fgets(E.name, 20,stdin);
    E.name[strcspn(E.name,"\n")]='\0';
    printf("Enter salary of the employee: ");
    scanf("%f",&E.salary);
    return E;
}  