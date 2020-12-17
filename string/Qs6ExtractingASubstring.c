 // Write a program to extract a substring from the middle of a given string.
 
 #include<stdio.h>
 int main(int argc, char const *argv[]){
    char str[30], substr[30];
    int m, n, i=0;
    // user input
    printf("\n Enter the main string : ");
    gets(str);
    printf("\n Enter the position from which to start the substring: ");
    scanf("%d", &m);
    printf("\n Enter the length of the substring: ");
    scanf("%d", &n);
    n-=1;
    // logic portion
    while ((str[i] != '\0') && (n>0))
    {
        substr[i]=str[m];
        i++;
        m++;
        n--;
    }
    substr[i]='\0';
    printf("\nSubstring of the given string is %s ", substr);
    return 0;
 }

 /*-----output-------------
  Enter the main string : abcdefghijklmn

 Enter the position from which to start the substring: 2

 Enter the length of the substring: 8

Substring of the given string is cdefghi
 */