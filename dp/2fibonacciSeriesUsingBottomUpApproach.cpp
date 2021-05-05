// WAP to to execute fibonacci series using dynamic programming (bottom up approach)

#include<bits/stdc++.h>
using namespace std;


int fib(int n){
    int dp[1000] = {}; // making a dp array to store recursive values
    dp[0] = 0;
    dp[1] = 1;
    for (int curNum = 2; curNum <= n; curNum++){
        dp[curNum] = dp[curNum -1] + dp[curNum -2];  // storing in in dp such that the required 2 values are already in the array, so computation is much faster 
    } 
    return dp[n] ;
}
int main(int argc, char const *argv[]){
    int n;
    cin>>n;
    cout<<n<<"th fibonacci number is : "<<fib(n);
    return 0;
}
/*
input : 23

output : 
23th fibonacci number is : 28657
*/