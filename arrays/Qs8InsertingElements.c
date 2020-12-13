// Write a program to insert a number in an array that is already sorted in ascending order.

#include<stdio.h>
int main(int argc, char const *argv[]){
    int n, num=0, temp=0;  
    // taking array elements and the number to be inserted 
    printf("Enter size of array: \n");
    scanf("%d",&n);
    // making array with greater than actual size because we need space for insertion of element
    int arr[n+1];
    printf("Enter the elements of array in ascending order: \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be inserted : \n");
    scanf("%d", &num);

    // logic portion
    for (int i = 0; i <n; i++)
    {
        if ((arr[i]< num) && (arr[i+1]>num))
        {
            for (int j = n; j >=(i+1); j--)
            {
                arr[j+1]=arr[j];    
            }
            arr[i+1]=num;
        }  
    }
    n+=1;
    printf("After the insertion array will looks like : \n");
    for (int k = 0; k < n; k++)
    {
        printf("arr[%d] = %d \n",k, arr[k]);       
    }
    return 0;
}