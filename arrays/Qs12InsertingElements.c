// Write a program to merge two already sorted arrays

#include<stdio.h>
int main(int argc, char const *argv[]){
    int n1, n2,  index_first=0, index_second=0, index=0;
    // Taking elements to the first array
    printf("Enter number of elements present in array1 : \n");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of array1 in : \n");
    for (int i = 0; i < n1; i++)
    {
        printf("arr1[%d] = ",i);
        scanf("%d", &arr1[i]);
    }
    // Taking elements to the second array
    printf("Enter number of elements present in array2 : \n");
    scanf("%d", &n2);

    int arr2[n2], arr3[n1+n2];

    printf("Enter the elements of array2: \n");
    for (int i = 0; i < n2; i++)
    {
        printf("arr2[%d] = ",i);
        scanf("%d", &arr2[i]);
    }

    // assigning elements to arr3
    while (index_first<n1, index_second<n2)
    {
        if (arr1[index_first]<arr2[index_second])
        {
            arr3[index]=arr1[index_first];
            index_first++;
        }
        else 
        {
            arr3[index]=arr2[index_second];
            index_second++;
        }
            index++;        
    }

    // if elements of the first array are over and the second array has some elements
    if (index_first==n1)
    {
        for (int i = n1; i < n2; i++)
        {
            arr3[index]=arr2[index_second];
        }
        
    }

    // if elements of the second array are over and the first array has some elements
    else if (index_second==n2)
    {
        for (int i = n2; i < n1; i++)
        {
            arr3[index]=arr1[index_first];
        }        
    }

    printf("\nElements of array 3 are :\n");
    // Printing the values
    for (int i = 0; i < n1+n2; i++)
    {
        printf("arr3[%d] = %d\n",i,arr3[i]);
    }

    return 0;
}