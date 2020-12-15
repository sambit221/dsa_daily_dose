// Write a program to transpose a 3¥3 matrix.

#include<stdio.h>
int main(int argc, char const *argv[]){
    int arr1[3][3], arr2[3][3];
    // taking elements of the array from the user
    printf("enter the elements of 3*3 matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr1[%d][%d] = ",i, j);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }

    // logic of transpose 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr2[i][j]=arr1[j][i];
        }
    }

    // printing matrix after transpose
    for(int i=0; i<3; i++){
        printf("\n");
        for(int j=0; j<3; j++){
            printf("\narr[%d][%d] = %d ",i, j, arr2[i][j]);
        }
    }
    return 0;
}

/* ----------output------------
enter the elements of 3*3 matrix : 
arr1[0][0] = 0
arr1[0][1] = 1
arr1[0][2] = 2

arr1[1][0] = 3
arr1[1][1] = 4
arr1[1][2] = 5

arr1[2][0] = 6
arr1[2][1] = 7
arr1[2][2] = 8



arr[0][0] = 0
arr[0][1] = 3
arr[0][2] = 6

arr[1][0] = 1
arr[1][1] = 4
arr[1][2] = 7

arr[2][0] = 2
arr[2][1] = 5
arr[2][2] = 8

*/