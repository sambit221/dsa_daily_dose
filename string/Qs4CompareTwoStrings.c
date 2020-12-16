// Write a program to compare two strings.

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[]){
    char str1[20], str2[20];
    int len1, len2, i=0, same=0; 
    // taking string input
    printf("Enter the string1 : \n");
    scanf("%s", str1);
    printf("Enter the string2 : \n");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 == len2)
    {
        while (i < len1)
        {
            if (str1[i]==str2[i])
            {
                i++;
            }
            else
            {
                break;
            }   
        }
        if (i==len1)
        {
            same =1;
            printf("two strings are equal. \n");
        }
    }
    if (len1 != len2)
    {
        printf("The strings are not equal. \n");
    }
    if (same == 0)
    {
        i=0;
        if (str1[i]>str2[i])
            {
                printf("The string1 is greater than string2. \n");
            }
            if (str2[i]>str1[i])
            {
                printf("The string2 is greater than string1. \n");
            }              
    }   
    return 0;
}

/*--------output-------------
Enter the string1 : 
sam
Enter the string2 :
anw
The string1 is greater than string2.
*/