// Write a program to merge two already sorted arrays

#include<stdio.h>
int main(int argc, char const *argv[]){
    int arr1[3], arr2[4], arr3[10];
    printf("Enter the elements of array1 in : \n");
    for (int i = 0; i < 3; i++)
    {
        printf("arr1[%d] = ",i);
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of array2: \n");
    for (int i = 0; i < 4; i++)
    {
        printf("arr2[%d] = ",i);
        scanf("%d", &arr2[i]);
    }
    // logic
    printf("Elements of array 3 is :\n");
    for (int i = 0; i < 3; i++)
    {
        arr3[i]=arr1[i];
    }
    for (int i = 3; i < 10; i++)
    {
        arr3[i]=arr2[i-3];
    }
    // Printing the values
    for (int i = 0; i < 10; i++)
    {
        printf("arr3[%d] = %d\n",i,arr3[i]);
    }

    return 0;
}