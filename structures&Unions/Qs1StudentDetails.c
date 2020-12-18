// Write a program using structures to read and display the information about a student.

#include<stdio.h>
int main(int argc, char const *argv[]){
    struct student
    {
        int roll_no ;
        char name[20];
        float fees;
        char dob[20];
    };
    struct student s1;
    // taking user input
    printf("\n Enter roll no of the the student : ");
    scanf("%d",&s1.roll_no);
    printf("\n Enter name of the the student : ");
    scanf("%s",&s1.name);
    printf("\n Enter fees of the the student : ");
    scanf("%f",&s1.fees);
    printf("\n Enter DOB of the the student : ");
    scanf("%s",&s1.dob);

    // output of the student details
    printf("\n ********STUDENT'S DETAILS *******");   
    printf("\n roll no : %d ",s1.roll_no);
    printf("\n name : %s",s1.name);
    printf("\n fees : %.2f",s1.fees);
    printf("\n dob : %s",s1.dob);
    return 0;
}

/*-------------output----------------
Enter roll no of the the student : 4  

 Enter name of the the student : sam

 Enter fees of the the student : 80000

 Enter DOB of the the student : 25-03-2002

 ********STUDENT'S DETAILS *******
 roll no : 4
 name : sam
 fees : 80000.00
 dob : 25-03-2002
*/