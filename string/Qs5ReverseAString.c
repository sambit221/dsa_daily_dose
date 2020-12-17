// Write a program to reverse a given string.

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[]){
    char str[20], temp; 
    int i=0,j;
    printf("Enter a string : \n");
    gets(str);
    j = strlen(str);
    printf("length of the String is : %d \n",j);
    j--;
    // swap logic
    while (i<j)
    {
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
        j--;
        i++;
    }
    printf("After reversing the String is : %s",str);

    return 0; 
}
/*----------output-----------------
Enter a string :
sambit
length of the String is : 6
After reversing the String is : tibmas
*/