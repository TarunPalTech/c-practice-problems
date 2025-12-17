/* 
5.
    Define a structure Student with name, roll number and college name as members.
    Define another structure Team with two Student type variables as members.
6.
    In question 5, define a method to dynamically create a Student type variable and
    initialise with the values received in the arguments. Return address of Student type
    variable.
7.
    In question 5, define a method to dynamically create Team variable, initialise it with
    the received arguments. Return address of the Team variable.
8.
    In question 5, define a method to display data of Student type, also define a method
    to display data of Team type.
9.
    In question 5, define a method to dynamically create an array of pointers of type
    Student. Array size is received as an argument. Return the address of array.
10. 
    In question 5, define a method to dynamically create an array of pointers of type
    Team. Array size is received as an argument. Return the address of array.
11. 
    In question 5, define a driver function to create 6 Students and 3 Teams. Form
    teams by assigning two students in each team. At last display the list of teams with
    students in them.
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>


struct Student{
    char name[20];
    int roll_number;
    char college_name[50];
};

struct Team{
    struct Student s1;
    struct Student s2;
};

void displayTeamData(struct Team *p);
struct Team** createTeamArray(int size);
struct Student** createStudentArray(int size);void displayTeamData(struct Team *p);
void displayStudentData(struct Student *p);
struct Student** createStudentArray(int size);
struct Team* createTeam(struct Student *p, struct Student *q);

struct Student* createStudent(char *n, int r, char *cn){
    struct Student *p = (struct Student*)malloc(sizeof(struct Student));
    strcpy(p->name,n);
    p->roll_number = r;
    strcpy(p->college_name,cn);
    return p;
}

struct Team* createTeam(struct Student *p, struct Student *q){
    struct Team *r = (struct Team*)malloc(sizeof(struct Team));
    r->s1 = *p;
    r->s2 = *q;
    return r;
}

void displayStudentData(struct Student *p){
    printf("\nName - %s\n",(p->name));
    printf("Roll number - %d\n",p->roll_number);
    printf("College Name - %s\n",p->college_name);
}

void displayTeamData(struct Team *p){
    printf("Team Data:");
    displayStudentData(&p->s1);
    displayStudentData(&p->s2);
} 

struct Student** createStudentArray(int size){
    struct Student** p = (struct Student**)malloc(size * sizeof(struct Student*));
    return p;
}

struct Team** createTeamArray(int size){
    struct Team** p = (struct Team**)malloc(size*sizeof(struct Team*));
    return p;
}

int main() {
    struct Student** students = createStudentArray(6);
    struct Team** teams = createTeamArray(3);

    // Create 6 students
    students[0] = createStudent("Tarun", 101, "Invertis");
    students[1] = createStudent("Ravi", 102, "Invertis");
    students[2] = createStudent("Neha", 103, "Invertis");
    students[3] = createStudent("Amit", 104, "Invertis");
    students[4] = createStudent("Priya", 105, "Invertis");
    students[5] = createStudent("Rahul", 106, "Invertis");

    // Form 3 teams
    teams[0] = createTeam(students[0], students[1]);
    teams[1] = createTeam(students[2], students[3]);
    teams[2] = createTeam(students[4], students[5]);

    // Display teams
    for (int i = 0; i < 3; i++) {
        printf("\nTeam %d:\n", i + 1);
        displayTeamData(teams[i]);
    }

    // Free memory
    for (int i = 0; i < 6; i++) free(students[i]);
    for (int i = 0; i < 3; i++) free(teams[i]);
    free(students);
    free(teams);

    return 0;
}
