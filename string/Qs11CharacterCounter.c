// Write a program to read multiple lines of text and then count the number of characters,words, and lines in the text.

#include<stdio.h>
int main(int argc, char const *argv[]){
    char str[200];
    int word_count=1, line_count=1, char_count=1, i=0;
    printf("\n Enter a * at the end");
    printf("\n **************");
    printf("\n Enter the text : ");
    scanf("%c", &str[i]);
    while (str[i] != '*')
    {
        i++;
        scanf("%c", &str[i]);
    }
    str[i] = '\0';
    i=0;
    while (str[i] != '\0')
    {
        if (str[i]=='\n' || i==79)
            line_count++;
        if (str[i]==' ' && str[i+1]!=' ')
            word_count++;
        i++;
        char_count++;       
    }
    printf("\n The total count of words is : %d", word_count);
    printf("\n The total count of lines is : %d", line_count);
    printf("\n The total count of characters is : %d", char_count); 
    return 0;
}
/*------------output-------------------

 Enter a * at the end
 **************
 Enter the text : hlo i am sam*

 The total count of words is : 4
 The total count of lines is : 1
 The total count of characters is : 13
*/