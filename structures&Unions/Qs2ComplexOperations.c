// Write a program to read, display, add, and subtract two complex numbers.

#include<stdio.h>
int main(int argc, char const *argv[]){
    typedef struct Complex{
        int real;
        int img;
    }complex;
    complex c1,c2,sum,sub;
    int option;
    do{
        printf("\n ********** MAIN MENU ***********");
        printf("\n 1. Read the complex numbers");
	 	printf("\n 2. Display the complex numbers");
	 	printf("\n 3. Add the complex numbers");
	 	printf("\n 4. Subtract the complex numbers");
	 	printf("\n 5. EXIT");
	 	printf("\n Enter your option : ");
	 	scanf("%d", &option);
        switch (option){
        case 1:
            printf("\n Enter real part of first number : ");
            scanf("%d", &c1.real);
            printf("\n Enter imaginary part of first number : ");
            scanf("%d", &c1.img);
            break;
        case 2:
            printf("\n The first complex number is : %d+%di ",c1.real, c1.img);
            printf("\n The second complex number is : %d+%di ",c2.real, c2.img);
            break;
        case 3:
            sum.real=c1.real+c2.real;
            sum.img=c1.img+c2.img;
            printf("\n Sum of first and second complex number is : %d+%di ",sum.real, sum.img);
            break;
        case 4:
            sub.real=c1.real-c2.real;
            sub.img=c1.img-c2.img;
            printf("\n Sum of first and second complex number is : %d+%di ",sub.real, sub.img);
            break;
        }
    } while (option !=5);
    
    return 0;
}

/* --------output----------

********** MAIN MENU ***********
 1. Read the complex numbers
 2. Display the complex numbers
 3. Add the complex numbers
 4. Subtract the complex numbers
 5. EXIT
 Enter your option : 1

 Enter real part of first number : 3

 Enter imaginary part of first number : 4

 ********** MAIN MENU ***********
 1. Read the complex numbers
 2. Display the complex numbers
 3. Add the complex numbers
 4. Subtract the complex numbers
 5. EXIT
 Enter your option : 2

 The first complex number is : 3+4i
 The second complex number is : 4200320+0i
 ********** MAIN MENU ***********
 1. Read the complex numbers
 2. Display the complex numbers
 3. Add the complex numbers
 4. Subtract the complex numbers
 5. EXIT
 Enter your option : 3

 Sum of first and second complex number is : 4200323+4i
 ********** MAIN MENU ***********
 1. Read the complex numbers
 2. Display the complex numbers
 3. Add the complex numbers
 4. Subtract the complex numbers
 5. EXIT
 Enter your option : 4

 Sum of first and second complex number is : -4200317+4i
 ********** MAIN MENU ***********
 1. Read the complex numbers
 2. Display the complex numbers
 3. Add the complex numbers
 4. Subtract the complex numbers
 5. EXIT
 Enter your option : 5
*/