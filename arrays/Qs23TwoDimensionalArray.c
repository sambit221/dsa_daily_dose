// Write a program to multiply two m ¥ n matrices.

#include<stdio.h>
int main(int argc, char const *argv[]){
    int arr1[2][2], arr2[2][2], res[2][2];
    // taking elements of the array from the user
    printf("enter the elements of 2*2 matrix1 : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("arr1[%d][%d] = ",i, j);
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n Enter the elements of 2*2 matrix2 : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("arr2[%d][%d] = ",i, j);
            scanf("%d", &arr2[i][j]);
        }
        printf("\n");
    }
    // logic of multiplication
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res[i][j]=0;
            for (int k = 0; k < 2; k++)
                res[i][j] += arr1[i][k] * arr2[k][j];
        }
    }
    printf("After the multiplication of matrix1 and matrix 2 :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("res[%d][%d] = %d\n",i, j, res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/* ------------output-----------------
enter the elements of 2*2 matrix1 : 
arr1[0][0] = 1
arr1[0][1] = 2

arr1[1][0] = 3
arr1[1][1] = 4


 Enter the elements of 2*2 matrix2 :
arr2[0][0] = 5
arr2[0][1] = 6

arr2[1][0] = 7
arr2[1][1] = 8

After the multiplication of matrix1 and matrix 2 :
res[0][0] = 19
res[0][1] = 22

res[1][0] = 43
res[1][1] = 50

*/