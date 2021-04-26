// WAP to sort an array with user defined condition for comparision 

#include<bits/stdc++.h>
using namespace std;

bool myCompare(int a,int b){
    return a>b;
}

int main(int argc, char const *argv[]){
    int a[]= {5,4,3,1,2,6,7};
    int n = sizeof(a)/sizeof(int);
    // inside sorting function we are passing mycompare fxn as condition, if this condition will be true then swapping will take place
    sort(a,a+n, myCompare); // sorting will take place in between a and a+n 
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }    
    return 0;
}
/* 
output: 7 6 5 4 3 2 1 
*/