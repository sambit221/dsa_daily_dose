//WAP to find power of a number n using recursion 

#include <iostream>
using namespace std;

// time complexity - O(n)
int pow1(int m, int n){
    if(n==0){
    	return 1;     
    }
    else{
    	return pow1(m,n-1) * m; 
	}
}

// more effitient code where time complexity - O(log n)
// as we are reducing the no of iteration to half in each step
int pow2(int m, int n){
    if(n==0){
    	return 1;     
    }
    // if n is even
    else if(n%2==0){
    	return pow2(m*m,n/2); 
	}
	// if n is odd
    else{
    	return m*pow2(m*m,(n-1)/2) ; 
	}
}
int main(){
    printf("The value of pow1 function using recursion is %d\n", pow1(5, 3));
    printf("The value of pow2 function using recursion is %d\n", pow2(5, 3));
    return 0;
}

/* ---------------output------------------
The value of pow1 function using recursion is 125
The value of pow2 function using recursion is 125
 
*/
