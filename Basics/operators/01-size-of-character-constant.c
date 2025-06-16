// Problem: Write a program to calculate size of a character constant.

// Description: In C, character constants like 'A' are of type int, not char.


/* Ist Method */
// #include<stdio.h>

// int main(){
//     printf("Size of the character constant is %d.",sizeof('A'));
//     return 0;
// }

/* II Method(Best Method) */
#include<stdio.h>

int main(){
    printf("Size of the character constant is %zu.",sizeof('A'));
    return 0;
}
/* 
sizeof() returns value of size_t type - So, there is need to use %zu in place of %d
% - start of format specifier
z - length modifier for size_t
u - unsigned type modifier
*/


/* 
Important: In C++, 'A' is a char, so sizeof('A') == sizeof(char) (usually 1)
*/