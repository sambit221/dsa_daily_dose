// Write a program to convert the lower case characters of a string into upper case.

#include<stdio.h>
int main(int argc, char const *argv[]){
    char str[20];
    int i =0;
    printf("Enter a string : \n");
    scanf("%s", str);
    while (str[i] !='\0')
    {
        if ((str[i]>='a') && (str[i]<='z'))
        {
            str[i] = str[i] -32;
        }
        else
        {
            str[i] = str[i];
        }
        i++;
    }
    printf("After converting the string into uppercase we have : %s\n",str);
    return 0;
}

/*----------output-----------

Enter a string : 
saMbiT KumAr
After converting the string into uppercase we have : SAMBIT
*/