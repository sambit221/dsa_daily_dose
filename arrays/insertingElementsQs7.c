// Write a program to insert a number at a given location in an array.

#include<stdio.h>
int main(int argc, char const *argv[]){
    int n, num=0, pos=0;  
    // taking array elements and the number to be inserted 
    printf("Enter size of array: \n");
    scanf("%d",&n);
    // making array with greater thyan actual size because we need space for insertion of element
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be inserted : \n");
    scanf("%d", &num);
    printf("Enter the position where the number to be inserted : \n");
    scanf("%d", &pos);

    // logic portion
    for (int i = n-1; i >=pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos]=num;
    n+=1;
    printf("After the insertion array will looks like : \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \n",i, arr[i]);       
    }
    return 0;
}