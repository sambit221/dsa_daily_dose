//WAP to sum first n natural numbers using recursion 

#include <iostream>
using namespace std;

int sum(int n){
    if(n==0){
    	return 0;     
    }
    else{
    	return sum(n-1) + n; 
	}
}

int main(){
    printf("The sum first n natural numbers is %d", sum(10));
    
    return 0;
}

/* ---------------output------------------
The sum first n natural numbers is 55
 
*/
