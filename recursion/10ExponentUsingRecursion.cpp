//WAP to find exponent of a number n using recursion 

#include <iostream>
using namespace std;

int exponent(int m, int n){
    if(n==0){
    	return 1;     
    }
    else{
    	return exponent(m,n-1) * m; 
	}
}

int main(){
    printf("The value of exponent of a number is %d", exponent(5, 3));
    return 0;
}

/* ---------------output------------------
The value of exponent of a number is 125
 
*/
