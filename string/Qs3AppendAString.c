// Write a program to append a string to another string.

#include<stdio.h>
int main(int argc, char const *argv[]){
    char sou[20], des[40];
    int i=0, j=0; 
    // taking string input
    printf("Enter the destination string : \n");
    scanf("%s", des);
    printf("Enter the source string : \n");
    scanf("%s", sou);
    
    // logic for appending an array to another
    for (i = 0; des[i]!='\0'; i++);
    for (int k = 0; sou[k]!='\0'; k++)
    {
        des[i]=sou[k];
        i++;
    }
    des[i] ='\0';   
    printf("After appending source string to the destination string we got : %s",des);
    return 0;
}

/*--------output-----------

Enter the destination string : 
sam
Enter the source string :
bitkumar
After appending source string to the destination string we got : sambitkumar
*/