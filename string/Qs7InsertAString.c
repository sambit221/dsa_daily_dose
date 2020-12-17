// Write a program to insert a string in the main text

#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[]){
    char text[100], str[20], ins_text[100];
    int pos, i=0, j=0, k=0;
    printf("Enter the main text : \n");
    gets(text);
    printf("Enter the string to be inserted : \n");
    gets(str);
    printf("Enter the position at which the string has to be inserted:\n");
    scanf("%d", &pos);
    // logic
    // i iterates the while loop, j iterates ins_text string and k iterates str string
    while(text[i]!='\0'){
        if (i==pos)
        {
            while (str[k] !='\0')
            {
                ins_text[j]=str[k];
                j++;
                k++;
            }    
        }
        else
        {
            ins_text[j]=text[i];
            j++;
        } 
        i++;      
    }
    ins_text[j]='\0';
    printf("After insertion the string is : ");
    puts(ins_text);
    return 0;
}

/*-----output--------------
Enter the main text : 
newsman
Enter the string to be inserted : 
paper
Enter the position at which the string has to be inserted:
4
After insertion the string is : newspaperan
*/