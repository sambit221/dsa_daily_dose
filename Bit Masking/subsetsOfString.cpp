// WAP to print all subsets of a given string using bitmasking technique

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
int getIthBit(int n, int i) {return (n & (1<<i))!=0 ? 1:0;}
void filter(char *a,int no){
    int i=0;
	while (no>0){
        (no&1) ? cout<<a[i]:cout<<"";
        i++;
        no=no>>1;
    }
    cout<<endl;   
}
void generateSubsets(char *a){
    int n=strlen(a);
    int range = (1<<n)-1;
    for (int i = 0; i <=range; i++){
        filter(a,i);
    }
}
int main(int argc, char const *argv[]){
    int n,i;
    char c[100];
    cout<<"Enter a string :";
    cin>>c;
    generateSubsets(c);
    return 0;
}
/* 
Input- Enter a string :
abcd

Output-
a
b
ab
c
ac
bc
abc
d
ad
bd
abd
cd
acd
bcd
abcd
*/
