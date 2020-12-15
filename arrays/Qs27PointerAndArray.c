// Write a program which illustrates the use of a pointer to a three-dimensional array.

#include<stdio.h>
int main(int argc, char const *argv[]){
    int arr[2][2][2];
    printf("Enter elements of 3-d array : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("\narr[%d][%d][%d] = ",i, j, k);
                scanf("%d",&arr[i][j][k]);
            }            
        }        
    }
    printf("\nElements of the array are : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("\narr[%d][%d][%d] = %d \n",i, j, k, *(*(*(arr+i)+j)+k));
            }            
        }        
    }   
    return 0;
}

/* ---------output-------------
Enter elements of 3-d array : 

arr[0][0][0] = 0

arr[0][0][1] = 1

arr[0][1][0] = 2

arr[0][1][1] = 3

arr[1][0][0] = 4

arr[1][0][1] = 5

arr[1][1][0] = 6

arr[1][1][1] = 7

Elements of the array are : 

arr[0][0][0] = 0

arr[0][0][1] = 1

arr[0][1][0] = 2

arr[0][1][1] = 3

arr[1][0][0] = 4

arr[1][0][1] = 5

arr[1][1][0] = 6

arr[1][1][1] = 7

*/