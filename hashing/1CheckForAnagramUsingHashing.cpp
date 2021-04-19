// WAP to chek 2 strings are anagram(having same set of characters) or not

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    char a[]="decimal";
    char b[]="medical";
    int i, h[26] ={0}; // initialising all elements as 0
    for ( i = 0; a[i] !='\0'; i++){
        h[a[i]-97]+=1; // turning on the elements in the hash table
    }
    for (i = 0; b[i] !='\0'; i++){
        h[a[i]-97]-=1; // turning on the elements in the hash table
        if (h[a[i]-97]<0){
            printf("Not anagram \n");
            break;
        }  
    }
    if(b[i]=='\0')
        printf("It is an anagram.\n");
    return 0;
} 

/* --------------output--------------------
It is an anagram.
*/