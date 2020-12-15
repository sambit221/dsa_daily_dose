// Write a program to read a 2D array marks which stores the marks of five students in three subjects. 
// Write a program to display the highest marks in each subject.

#include<stdio.h>
int main(int argc, char const *argv[]){
    int arr[5][3], sum2=0;
    // elements input
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the marks scored in 3 subjects by the student %d : = \n",i+1);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }        
    }
    // logic
    for (int l = 0; l < 3; l++)
    {
        for (int k = 0; k < 5; k++)
        {
            sum2 = sum2 + arr[k][l];
        }
        printf("total marks in subject %d is = %d\n",l+1, sum2);
        sum2 = 0;
    }
    return 0;
}

/*----------- output----------------

Enter the marks scored in 3 subjects by the student 1 : =
1
2
3

Enter the marks scored in 3 subjects by the student 2 : =
1
2
3

Enter the marks scored in 3 subjects by the student 3 : =
1
2
3

Enter the marks scored in 3 subjects by the student 4 : =
1
2
3

Enter the marks scored in 3 subjects by the student 5 : =
1
2
3
total marks in subject 1 is = 5
total marks in subject 2 is = 10
total marks in subject 3 is = 15

*/