// Write a program to input two m * n matrices and then calculate the sum of their
// corresponding elements and store it in a third m ¥ n matrix.

#include<stdio.h>
int main(int argc, char const *argv[]){
    int arr1[4][4], arr2[4][4], arr3[4][4];
    // taking elements of the array from the user
    printf("enter the elements of 4*4 matrix1 : \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("arr1[%d][%d] = ",i, j);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nenter the elements of 4*4 matrix2 : \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("arr2[%d][%d] = ",i, j);
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    // logic of sum
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("After the sum of matrix1 and matrix 2 :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("arr3[%d][%d] = %d\n",i, j, arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}


// - -------------output----------------

/*
enter the elements of 4*4 matrix1 : 
arr1[0][0] = 0
arr1[0][1] = 1
arr1[0][2] = 2
arr1[0][3] = 3

arr1[1][0] = 4
arr1[1][1] = 5
arr1[1][2] = 6
arr1[1][3] = 7

arr1[2][0] = 8
arr1[2][1] = 9
arr1[2][2] = 10
arr1[2][3] = 11

arr1[3][0] = 12
arr1[3][1] = 13
arr1[3][2] = 14
arr1[3][3] = 15
*/