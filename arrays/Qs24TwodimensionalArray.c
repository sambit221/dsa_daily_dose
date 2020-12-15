// Write a program to fill a square matrix with value zero on the diagonals, 1 on the upper right triangle, and –1 on the lower left triangle.
#include<stdio.h>
void task(int arr[5][5], int );
int main(int argc, char const *argv[]){
    printf("Number of rows and columns of the matrix is 5: \n");
    int matrix[5][5];
    task(matrix, 5);
    return 0;
}
// taken the element input
void task(int arr[5][5], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
                arr[i][j]=0;
            else if (j>i)
                arr[i][j]=1;
            else
                arr[i][j]=-1;            
        }        
    }
    // printing values
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d", arr[i][j]) ;           
        }
        printf("\n");        
    }  
}
/* ----------output------------
Number of rows and columns of the matrix is 5:
 0 1 1 1 1
 -1 0 1 1 1
 -1 -1 0 1 1
 -1 -1 -1 0 1
 -1 -1 -1 -1 0
*/
