// Write a program to concatenate two strings (str2 into str1).

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[]){
    char str1[20], str2[20], copy_str[50];
    char *pstr1, *pstr2, *pcopy_str;
    pstr1=str1;
    pstr2=str2;
    pcopy_str=copy_str;
    // string input
    printf("Enter the string1 : ");
    gets(str1);
    printf("Enter the string2 : ");
    gets(str2);

    // copying str1 to copy_str
    while (*pstr1 != '\0')
    {
        *pcopy_str=*pstr1;
        pstr1++;
        pcopy_str++;
    }
    // copying str2 to copy_str
    while (*pstr2 != '\0')
    {
        *pcopy_str=*pstr2;
        pstr2++;
        pcopy_str++;
    }
    *pcopy_str = '\0';
    pcopy_str=copy_str;

    // printing concatenated text
    printf("\nConcatenated text is : \n");
    while (*pcopy_str != '\0')
    {
        printf("%c",*pcopy_str);
        pcopy_str++;
    }
    return 0;
}

/*--------output--------------
Enter the string1 : rah
Enter the string2 : ul

Concatenated text is :
rahul
*/