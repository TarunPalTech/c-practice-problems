// Problem: What will be the value stored in the variable x after executing following statement: x=10>8>4:

// Description: Value in the variable x is 0 because operator chaining isn't allowed in c language.

#include<stdio.h>

int main(){
    int x=10>8>4;
    printf("Value in variable x is %d.",x);
    return 0;
}