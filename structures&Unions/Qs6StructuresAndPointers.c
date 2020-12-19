// Write a program to initialize the members of a structure by using a pointer to the structure.

#include <stdio.h>
struct student{
    int r_no;
	char name[20];
	char course[20];
    int fees;
};
int main(int argc, char const *argv[]){
    struct student *p_stud, stud;
    p_stud = &stud;
    printf("\n Enter details of student : ");
    printf("\n Enter roll no : ");
    scanf("%d",&p_stud->r_no);
    printf("\n Enter name : ");
    scanf("%s",&p_stud->name);
    printf("\n Enter course : ");
    scanf("%s",&p_stud->course);
    printf("\n Enter fees : ");
    scanf("%d",&p_stud->fees);
// printing student details
    printf("\n DETAILS OF THE STUDENT");
    printf("\n Roll No - %d",p_stud->r_no);
    printf("\n Name - %s",p_stud->name);
    printf("\n Course- %s",p_stud->course);
    printf("\n Fees- %d",p_stud->fees);
    return 0;
}

/*--------output-------------

Enter details of student :
 Enter roll no : 3

 Enter name : sam

 Enter course : cse

 Enter fees : 40000

 DETAILS OF THE STUDENT
 Roll No - 3
 Name - sam
 Course- cse
 Fees- 40000
*/
