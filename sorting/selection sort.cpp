// WAP to perform selection sort

#include<bits/stdc++.h>
using namespace std;  
#define ll              long long
#define lli             long long int
#define pb              push_back 
#define mp              make_pair 
#define mod             1000000007 
//#define w(t)          int t; cin>>t; while(t--) 
#define ps(x,y)         fixed<<setprecision(y)<<x; 
int getIthBit(int n, int i) {return (n & (1<<i))!=0 ? 1:0;}
 
int main(){
    int t; 
    cin>>t; 
    int a[t];
    for(int j=0;j<t;j++){ // i/p
        cin>>a[j];
    }
    
    for(int i=0;i<t;i++){
        int minInd=i;
        for(int j=i+1;j<t;j++){
            if(a[j]<a[minInd]){
                minInd=j;
            }
        }
        swap(a[i],a[minInd]);
    }
    for(int j=0;j<t;j++){
        cout<<a[j]<<" ";
    }
    return 0;
}

// time complexity O(n^2)
/* 
Input : 5
        5 4 1 2 3
Output :1 2 3 4 5  
*/
