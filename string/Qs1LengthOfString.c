// Write a program to find the length of a string.

#include<stdio.h>
int main(int argc, char const *argv[]){
    char str[20];
    int i=0, count=0;
    printf("Enter the string : ");
    scanf("%s", str);
    while (str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("The string has %d number of characters.", count);
    return 0;
}

/* ----------output-----------

Enter the string : sambit kumar
The string has 6 number of characters.

*/