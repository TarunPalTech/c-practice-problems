// Problem: Write a function to print all unique elements in an array.

 #include<stdio.h>

void printAllUnique(int a[], int size);
void sort(int a[], int size);
void input(int a[], int size);
int main(){
    int size;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int a[size];
    input(a,size);
    printAllUnique(a,size);
    return 0;
}
void printAllUnique(int a[], int size){
    int  i=0, j=1;
    sort(a,size);
    while(i<size){
        while(j<size && a[i]==a[j]){
            j++;
        }
        if(j-i==1){
            printf("%d\t",a[i]);
        }
        i=j;
        j=i+1;
    }
}
void sort(int a[], int size){
    int temp;
    for(int round=1;round<size;round++){
        for(int i=0;i<size-round;i++){
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
void input(int a[], int size){
    printf("Enter %d elements:",size);
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
}