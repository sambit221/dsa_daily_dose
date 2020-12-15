// Write a program to read and display a 3¥3 matrix.

#include<stdio.h>
int main(int argc, char const *argv[]){
    int arr[3][3];
    // taking elements of the array from the user
    printf("enter the elements of 3*3 matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d] = ",i, j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    // printing the elements of the array
    printf("\n The elements of the matrix are ");
    for(int i=0; i<3; i++){
        printf("\n");
        for(int j=0; j<3; j++){
            printf("\narr[%d][%d] = %d ",i, j, arr[i][j]);
        }
    }
    return 0;
}

/* ---------------- output-----------

enter the elements of 3*3 matrix : 
arr[0][0] = 1
arr[0][1] = 2
arr[0][2] = 3

arr[1][0] = 4
arr[1][1] = 5
arr[1][2] = 6

arr[2][0] = 7
arr[2][1] = 8
arr[2][2] = 9


 The elements of the matrix are

arr[0][0] = 1
arr[0][1] = 2
arr[0][2] = 3

arr[1][0] = 4
arr[1][1] = 5
arr[1][2] = 6

arr[2][0] = 7
arr[2][1] = 8
arr[2][2] = 9

*/