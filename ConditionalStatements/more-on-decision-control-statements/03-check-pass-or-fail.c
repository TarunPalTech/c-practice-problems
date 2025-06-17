// Problem: Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

// Description:
// This program takes marks for 5 subjects from the user: Maths, English, Hindi, Science, and Reasoning.
// It first checks whether all the marks are in the valid range (0–100).
// If the marks are valid, it then checks if the student has scored at least 33 in each subject.
// If all subjects have marks >= 33, the student is considered passed. Otherwise, the student is failed.

#include<stdio.h>

int main(){
    int maths,english,hindi,science,reasoning;
    printf("Enter marks of maths, english, hindi, science, and reasoning:");
    scanf("%d%d%d%d%d",&maths,&english,&hindi,&science,&reasoning);
    if(maths>=0 && maths<=100 && english>=0 && english<=100 && hindi>=0 && hindi<=100 && science>=0 && science<=100 && reasoning>=0 && reasoning<=100){
        if(maths>=33 && english>=33 && hindi>=33 && science>=33 && reasoing>=33){
            printf("You are passed!");
        }else{
            printf("You are failed!");
        }
    }else{
        printf("Marks must be between 0 and 100!");
    }
}