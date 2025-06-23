// Problem: Write a program to calculate the difference between two time periods.

#include<stdio.h>

struct Time{
    int hours;
    int minutes;
    int seconds;
}; // definition of structure must be before structure declaration....
void displayTimeDifference(struct Time *d);
void timeDifference(struct Time *t1, struct Time *t2, struct Time *d);
void inputTime(struct Time *t);

int main(){
    struct Time start, end, diff;
    printf("Enter start time: \n");
    inputTime(&start);
    printf("Enter end time: \n");
    inputTime(&end);
    timeDifference(&start,&end,&diff);
    displayTimeDifference(&diff);
    return 0;
}
void displayTimeDifference(struct Time *d){
    printf("Time Difference is:\n");
    printf("\tHours: %d\n",d->hours);
    printf("\tMinutes: %d\n",d->minutes);
    printf("\tSeconds: %d\n",d->seconds);
}
void timeDifference(struct Time *t1, struct Time *t2, struct Time *d){
    int time_1_in_seconds = t1->hours*3600 + t1->minutes*60 + t1->seconds;
    int time_2_in_seconds = t2->hours*3600 + t2->minutes*60 + t2->seconds;
    int difference = time_1_in_seconds - time_2_in_seconds;
    if(difference < 0){
        difference = -difference;
    }
    d->hours = difference/3600;
    difference = difference%3600;
    d->minutes = difference/60;
    d->seconds = difference%60;
}
void inputTime(struct Time *t){
    printf("Enter hours: ");
    scanf("%d",&t->hours);
    printf("Enter Minutes: ");
    scanf("%d",&t->minutes);
    printf("Enter seconds: ");
    scanf("%d",&t->seconds);
}