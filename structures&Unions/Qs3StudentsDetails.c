// Write a program to read and display the information of a student using a nested structure.
#include <stdio.h>
int main()
    {
    struct DOB{
    int day;
    int month;
    int year;
    };
    struct student{
        int roll_no;
    	char name[100];
    	float fees;
    	struct DOB date;
    };
    struct student stud1;
    printf("\n Enter the roll number : ");
    scanf("%d", &stud1.roll_no);
    printf("\n Enter the name : ");
    scanf("%s", stud1.name);
    printf("\n Enter the fees : ");
    scanf("%f", &stud1.fees);
    printf("\n Enter the date from your DOB : ");
    scanf("%d", &stud1.date.day);
    printf("\n Enter the month from your DOB : ");
    scanf("%d", &stud1.date.month);
    printf("\n Enter the year from your DOB : ");
    scanf("%d", &stud1.date.year);
    printf("\n ********STUDENT'S DETAILS *******");
    printf("\n ROLL No. = %d", stud1.roll_no);
    printf("\n NAME = %s", stud1.name);
    printf("\n FEES = %.2f", stud1.fees);
    printf("\n DOB = %d "" / "" %d "" / "" %d", stud1.date.day, stud1.date.month, stud1.date.year);
    return 0;
}
/*-------output---------

Enter the roll number : 5

 Enter the name : sam

 Enter the fees : 80888

 Enter the date from your DOB : 25

 Enter the month from your DOB : 05

 Enter the year from your DOB : 2002

 ********STUDENT'S DETAILS *******
 ROLL No. = 5
 NAME = sam
 FEES = 80888.00
 DOB = 25  /  5  /  2002
*/