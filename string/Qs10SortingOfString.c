// Write a program to sort the names of students.

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[]){
    char names[5][10], temp[10];
    int i, j, n=0;
    printf("Enter the number of students : \n");
    scanf("%d",&n);
    for (i = 0; i <n ; i++)
    {
        printf("Enter the name of student %d : \n", i+1);
        scanf("%s",&names[i][10]);        
    }
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (strcmp(names[j], names[j+1])>0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }           
        }        
    }
    printf("---------------------------------\n ");
    printf("After sorting name of students : \n");
    for (int z = 0; z < n; z++)
    {
        puts(names[z]);
        printf("");
    }
    return 0;
}

/*---------output-----------------
Enter the number of students : 
4
Enter the name of student 1 : 
sambit
Enter the name of student 2 : 
sarthak
Enter the name of student 3 : 
rahul
Enter the name of student 4 : 
nayan
---------------------------------
 After sorting name of students :
nayan
rahul
sambit
sarthak
*/