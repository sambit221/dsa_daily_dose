// Write a program to read and display a 2¥2¥2 array

#include<stdio.h>
int main(int argc, char const *argv[]){
    int arr[3][3][3];
    // taking elements of the array from the user
    printf("enter the elements of 3*3 matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("arr[%d][%d][%d] = ",i, j,k);
                scanf("%d",&arr[i][j][k]);
            }            
        }
        printf("\n");
    }

    // printing the elements of the array
    printf("\n The elements of the matrix are ");
    for(int i=0; i<3; i++){
        printf("\n");
        for(int j=0; j<3; j++){
            printf("\n");
            for (int k = 0; k < 3; k++)
            {
                printf("\narr[%d][%d][%d] = %d ",i, j, k, arr[i][j][k]);
            }            
        }
    }
    return 0;
}
/* ---------output-----------
enter the elements of 3*3 matrix : 
arr[0][0][0] = 0
arr[0][0][1] = 1
arr[0][0][2] = 2
arr[0][1][0] = 3
arr[0][1][1] = 4
arr[0][1][2] = 5
arr[0][2][0] = 6
arr[0][2][1] = 7
arr[0][2][2] = 8

arr[1][0][0] = 9
arr[1][0][1] = 10
arr[1][0][2] = 11
arr[1][1][0] = 12
arr[1][1][1] = 13
arr[1][1][2] = 14
arr[1][2][0] = 15
arr[1][2][1] = 16
arr[1][2][2] = 17

arr[2][0][0] = 18
arr[2][0][1] = 19
arr[2][0][2] = 20
arr[2][1][0] = 21
arr[2][1][1] = 22
arr[2][1][2] = 23
arr[2][2][0] = 24
arr[2][2][1] = 25
arr[2][2][2] = 26


 The elements of the matrix are


arr[0][0][0] = 0
arr[0][0][1] = 1
arr[0][0][2] = 2

arr[0][1][0] = 3
arr[0][1][1] = 4
arr[0][1][2] = 5

arr[0][2][0] = 6
arr[0][2][1] = 7
arr[0][2][2] = 8


arr[1][0][0] = 9
arr[1][0][1] = 10
arr[1][0][2] = 11

arr[1][1][0] = 12
arr[1][1][1] = 13
arr[1][1][2] = 14

arr[1][2][0] = 15
arr[1][2][1] = 16
arr[1][2][2] = 17


arr[2][0][0] = 18
arr[2][0][1] = 19
arr[2][0][2] = 20

arr[2][1][0] = 21
arr[2][1][1] = 22
arr[2][1][2] = 23

arr[2][2][0] = 24
arr[2][2][1] = 25
arr[2][2][2] = 26

*/