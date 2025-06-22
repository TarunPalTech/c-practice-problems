// 9. Write a function to move first value of the array to the position where all smaller values will be in the left and greater values will be in the right.


/* 
In programming (especially in sorting algorithms like QuickSort), the term pivot refers to:

🔹 A special element selected from the array that is used as a reference point to partition the array into two parts.In programming (especially in sorting algorithms like QuickSort), the term pivot refers to:

🔹 A special element selected from the array that is used as a reference point to partition the array into two parts.
 */

 #include<stdio.h>

void moveFirstElement(int *p, int size);
int main(){
    int numbers[10] = {23, 5, 89, 12, 7, 55, 3, 42, 18, 66};
    moveFirstElement(numbers,10);
    for(int i=0;i<10;i++){
        printf("%d\t",numbers[i]);
    }
    return 0;
}
void moveFirstElement(int *p, int size){
    int left=0, right=size-1;
    int temp[size];
    int pivot = p[0];
    for(int i=1;i<size;i++){
        if(pivot>=p[i]){
            temp[left++]=p[i];
        }
    }
    for(int i=0;i<size;i++){
        if(pivot<p[i]){
            temp[right--]=p[i];
        }
    }
    temp[left]=pivot;
    for(int i=0;i<size;i++){
        p[i]=temp[i];
    }
}


/* Alternate Method - Without using any temporary array... */

// #include<stdio.h>

// void moveFirstElement(int *p, int size);
// int main(){
//     int numbers[10] = {23, 5, 89, 12, 7, 55, 3, 42, 18, 66};
//     moveFirstElement(numbers,10);
//     for(int i=0;i<10;i++){
//         printf("%d\t",numbers[i]);
//     }
//     return 0;
// }
// void moveFirstElement(int *p, int size){
//     int i=1, j=size-1, pivot=p[0];
//     while(i<=j){
//         while(i<=j && p[i]<=pivot) i++;
//         while(i<=j && p[j]>pivot) j--;
//         int temp;
//         if(i<j){
//             temp=p[i];
//             p[i]=p[j];
//             p[j]=temp;
//         }   
//     }   
//     int temp = p[0];
//     p[0]=p[j];
//     p[j]=temp;
// }