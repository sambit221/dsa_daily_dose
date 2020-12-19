// Write a program to read and display the information of all the students in a class. 
// Then edit the details of the ith student and redisplay the entire information.

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[]){
    struct studentDetails{
        int r_no;
        char name[20];
        int fees;
        char DOB[20];
    };
    struct studentDetails stud[20];
    int n, new_fees, new_rolno, num, i;
    char new_name[20], new_DOB[20];
    printf("\n Enter the number of students : ");
	scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("\n Enter the roll number : ");
	 	scanf("%d", &stud[i].r_no);
	 	printf("\n Enter the name : ");
	 	scanf("%s",&stud[i].name);
	 	printf("\n Enter the fees : ");
	 	scanf("%d",&stud[i].fees);
	 	printf("\n Enter the DOB : ");
	 	scanf("%s", &stud[i].DOB);
    }
    for(i=0;i<n;i++){
		printf("\n ********DETAILS OF STUDENT %d*******", i+1);
		printf("\n ROLL No. = %d", stud[i].r_no);
		printf("\n NAME = %s", stud[i].name);
		printf("\n FEES = %d", stud[i].fees);
		printf("\n DOB = %s", stud[i].DOB);
    }
    printf("\n Enter the student number whose record has to be edited : ");
	scanf("%d", &num);
    num = num - 1;
	printf("\n Enter the new roll number : ");
	scanf("%d", &new_rolno);
	printf("\n Enter the new name : ");
	scanf("%s",&new_name);
	printf("\n Enter the new fees : ");
    scanf("%d", &new_fees);
	printf("\n Enter the new DOB : ");
	scanf("%s",&new_DOB);
	stud[num].r_no = new_rolno;
	strcpy(stud[num].name, new_name);
	stud[num].fees = new_fees;
	strcpy (stud[num].DOB, new_DOB);
	for(i=0;i<n;i++){
	 	printf("\n ********DETAILS OF STUDENT %d*******", i+1);
	 	printf("\n ROLL No. = %d", stud[i].r_no);
	 	printf("\n NAME = %s", stud[i].name);
	 	printf("\n FEES = %d", stud[i].fees);
	 	printf("\n DOB = %s", stud[i].DOB);
    }
	return 0;
}

/*----------output-----------

 Enter the number of students : 2

 Enter the roll number : 1

 Enter the name : anish

 Enter the fees : 12000

 Enter the DOB : 12-4-2000

 Enter the roll number : 4

 Enter the name : rohan 

 Enter the fees : 30000

 Enter the DOB : 21-21-21 

 ********DETAILS OF STUDENT 1*******
 ROLL No. = 1
 NAME = anish
 FEES = 12000
 DOB = 12-4-2000
 ********DETAILS OF STUDENT 2*******
 ROLL No. = 4
 NAME = rohan
 FEES = 30000
 DOB = 21-21-21
 Enter the student number whose record has to be edited : 2

 Enter the new roll number : 5

 Enter the new name : ewew

 Enter the new fees : asd

 Enter the new DOB :
 ********DETAILS OF STUDENT 1*******
 ROLL No. = 1
 NAME = anish
 FEES = 12000
 DOB = 12-4-2000
 ********DETAILS OF STUDENT 2*******
 ROLL No. = 5
 NAME = ewew
 FEES = 0
 DOB = asd
*/