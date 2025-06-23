// Problem: Write a function to sort employees according to their names [refer structure from question 1]

#include<stdio.h>
#include<string.h>
#include<strings.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};
void inputEmployeeData(struct Employee *p);
void displayEmployeeData(struct Employee *p);
void sortBasesOnNames(struct Employee *p);

int main(){
    struct Employee E[3];
    inputEmployeeData(E);
    sortBasesOnNames(E);
    displayEmployeeData(E);
    return 0;
}
void displayEmployeeData(struct Employee *p){
    for(int i=0;i<3;i++){
        printf("\nDetails of employee %d:\n",i+1);
        printf("\tID: %d\n",((p+i)->id));
        printf("\tName: %s\n",(p+i)->name);
        printf("\tSalary: %.2f\n",(p+i)->salary);
    }
}
void sortBasesOnNames(struct Employee *p){
    struct Employee temp;
    for(int round=1;round<3;round++){
        for(int i=0;i<3-round;i++){
            if(strcasecmp((p+i)->name, (p+i+1)->name) > 0){
                temp=*(p+i);
                *(p+i)=*(p+i+1);
                *(p+i+1)=temp;
            }
        }
    }
}
void inputEmployeeData(struct Employee *p){
    for(int i=0;i<3;i++){
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