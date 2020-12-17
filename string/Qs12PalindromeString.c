// Write a program to find whether a string is a palindrome or not.

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[]){
    char str[20],i,j;
    int len, count=0;
    printf("Enter a string : \n");
    scanf("%s", &str);
    len = strlen(str);
    j=len-1;
    while(i<=len/2)
    {
        if (str[i]!=str[j])
            count++; 
        i++;
        j--;      
    }
    printf("count is %d\n",count);
    if (count)
        printf("The string is not a palindrome. \n");
    if (count==0)
        printf("The string is a palindrome. \n");   
    return 0;
}
/*--------output--------------

Enter a string :
aabbaa
count is 0
The string is a palindrome.
*/