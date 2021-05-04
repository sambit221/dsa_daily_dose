// WAP to to execute fibonacci series using dynamic programming (memoization concept)

#include<bits/stdc++.h>
using namespace std;
int memo[100];

int fib(int n){
    if (n==0) return 0;
    if (n==1) return 1;

    if (memo[n] !=-1){ // means that value isnot empty (fibonacci for that index is already calculated)
        return memo[n];
    }
    // if memo is empty for that valvue then command will reach the following
    int ans = fib(n-1)+fib(n-2); 
    memo[n]=ans; // storing that new fibonacci number (not calculated one) in the memo
    return ans;
}
int main(int argc, char const *argv[]){
    int n;
    cout<<"Enter the the value of n : ";
    cin>>n;
    for (int i = 0; i <=n; i++){ //including nth element also 
        memo[i] = -1;
    }
    cout<<n<<"th fibonacci number is : "<<fib(n);
    return 0;
}
/*
input : 
Enter the the value of n : 45

output : 
45th fibonacci number is : 1134903170
*/