// Write a program to copy a string into another string.

#include<stdio.h>
int main(int argc, char const *argv[]){
    char str[20], copy_str[20], *pstr, *pcopy_str;
    int i=0;
    pstr = str;
    pcopy_str = copy_str;
    printf("\n Enter the string : ");
    gets(str);
    printf("\n the entered string is : %s", str);
    while (*pstr!='\0')
    {
        *pcopy_str = *pstr;
        pcopy_str++;
        pstr++;
    }
    printf("\n Copied string  is : ");
    pcopy_str = copy_str;
    while (*pcopy_str!='\0')
    {
        printf("%c",*pcopy_str);
        pcopy_str++;
    }    
    return 0;
}
/*-------------output------------------
 Enter the string : sam

 the entered string is : sam
 Copied string  is : sam
*/