//WAP to find factorial of first n natural numbers using recursion 

#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
    	return 1;     
    }
    else{
    	return factorial(n-1) * n; 
	}
}

int main(){
    printf("The factorial of first n natural numbers is %d", factorial(5));
    
    return 0;
}

/* ---------------output------------------
The factorial of first n natural numbers is 120
 
*/
