// WAP to perform bubble sort

#include<bits/stdc++.h>
using namespace std;
#define ll 				long long
#define lli 			long long int
#define pb   			push_back 
#define mp 				make_pair 
#define mod 			1000000007 
//#define w(t) 			int t; cin>>t; while(t--) 
#define ps(x,y)			fixed<<setprecision(y)<<x; 
int getIthBit(int n, int i) {return (n & (1<<i))!=0 ? 1:0;}
 
int main(int argc, char const *argv[]){
    int t; 
    cin>>t; 
    int a[t];
    for(int j=0;j<t;j++){
        cin>>a[j];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int j=0;j<t;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}

// time complexity O(n^2)
/* 
Input : 5
        4 2 1 3 5
Output :1 2 3 4 5  
*/