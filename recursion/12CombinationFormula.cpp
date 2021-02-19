//WAP to print combination formula using recursion (pascal's triangle) using recursion 

#include <iostream>
using namespace std;

// factorial algorithm
int fact(int n){
	if(n==0){
		return 1;
	}
	return n*fact(n-1);
}
// combination formula using pascal's triangle
int c(int n, int r){
	if(r==0 || n==r)
		return 1;
	// pascal's triangle algorithm
	return c(n-1,r) + c(n-1,r-1);
}

int main(){
	int n,r;
	cout<<"Enter n, r for combination formula\n";
	cin>>n>>r;
    cout<< "Calculating Combination formula (n'c'r) using factorial method\n";
    cout<< "Value is :"<<(fact(n)/(fact(n-r)*fact(r)));
    cout<< "\nCalculating Combination formula (n'c'r) using Pascal's Triangle method method\n";
    cout<< "Value is :"<<c(n,r);
    return 0;
}

/* ---------------output------------------
Enter n, r for combination formula
5
3
Calculating Combination formula (n'c'r) using factorial method
Value is :10
Calculating Combination formula (n'c'r) using Pascal's Triangle method method
Value is :10
 
*/
