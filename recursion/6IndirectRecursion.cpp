//WAP to show Indirect recursion 

// In Indirect recursion A calls B then B again calls A. i.e, indirect recursion
#include <iostream>
using namespace std;

void funB(int ); // function Prototype

// funA calling funB
void funA(int n){
    if(n>0){
    	printf(" %d ",n);
    	funB(n-1);      
    }
}
// funB calling funA
void funB(int n){
    if(n>0){
    	printf(" %d ",n);
    	funA(n/2);     
    }
}

int main(){
    printf("Indirect Recursion.\n");
    funA(20);
    return 0;
}

/* ---------------output------------------
Indirect Recursion.
 20  19  9  8  4  3  1
 
*/
