// Write a program to delete a number from an array that is already sorted in ascending order.

#include<stdio.h>
int main(int argc, char const *argv[]){
    int n, num;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    int arr[n];

    // taking array elements
    printf("Enter the elements of an array in ascending order : \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to delete : \n");
    scanf("%d",&num);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            for (int j =i; j<n-1 ; j++)
            {
                arr[j]=arr[j+1];
            }           
        }        
    }
    n -=1;
    printf("After the deletion array will be : \n");
    for (int k = 0; k < n; k++)
    {
        printf("arr[%d] = %d \n",k, arr[k]);       
    }  
    return 0;
}