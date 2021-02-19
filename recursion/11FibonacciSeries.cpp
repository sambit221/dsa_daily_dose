//WAP to print fibonacci series using recursion 

#include <iostream>
using namespace std;

// making global array
int f[10];

// nth terms of fibonacci series using loops
// Time complexity O(n)
int fib1(int n){
	int t0=0, t1=1, s=0;
	cout<<t0<<" "<<t1<<" ";
	
    for(int i=2;i<n;i++){
    	s=t0+t1;
    	cout<<s<<" ";
    	t0 = t1;
    	t1 = s;
	}
	return s;
}
// fibonacci series using recursion
// Time complexity O(2`n)
int fib2(int n){
	if(n<=1){
		return n;
	}
	return fib2(n-2) + fib2(n-1);
}

// we can reduce the time by avoiding repetative calls in fibonacci series by using memoization algorithm
int fib3(int n){
	if(n<=1){
		return n;
	}
	else{
		if(f[n-2]==-1){
			f[n-2]=fib3(n-2);
		}
		if(f[n-1]==-1){
			f[n-1]=fib3(n-1);
		}
		return fib2(n-2) + fib2(n-1);
	}
}

int main(){
    printf("Fibonacci series using loops\n");
    fib1(12);
    printf("\nFibonacci series using recursion\n");
    fib1(12);
    printf("\nFibonacci series using memoization algorithm in recursion\n");
    for(int i=0;i<10;i++)
    	cout<<fib3(i)<<" ";
    return 0;
}

/* ---------------output------------------
Fibonacci series using loops
0 1 1 2 3 5 8 13 21 34 55 89
Fibonacci series using recursion
0 1 1 2 3 5 8 13 21 34 55 89
Fibonacci series using memoization algorithm in recursion
0 1 1 2 3 5 8 13 21 34
 
*/
