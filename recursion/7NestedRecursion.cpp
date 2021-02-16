//WAP to show Nested recursion 

// Here the function passes a function call as a parameter
#include <iostream>
using namespace std;

int funA(int n){
    if(n>100){
    	return n-10;     
    }
    else{
    	return funA(funA(n+11)); 
	}
}

int main(){
    printf("The result of this Nested Recursion is %d", funA(95));
    
    return 0;
}

/* ---------------output------------------
The result of Nested Recursion is 91
 
*/
