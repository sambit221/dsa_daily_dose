// print a string using pointer

#include<stdio.h>
int main(int argc, char const *argv[]){
    char str[]="Hello";
    char *ptr;
    ptr = str;
    printf("The string is :\n");
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}
/*------output----------
The string is :
Hello
*/