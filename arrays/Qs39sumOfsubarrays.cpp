// sum of all subarrays
#include<bits/stdc++.h>
using namespace std;
#define ll 				long long
#define lli 			long long int
#define pb   			push_back 
#define mp 				make_pair 
#define mod 			1000000007 
#define w(t) 			int t; cin>>t; while(t--) 
#define ps(x,y)			fixed<<setprecision(y)<<x; 
int getIthBit(int n, int i) {return (n & (1<<i))!=0 ? 1:0;}
 
int main(int argc, char const *argv[]){
    w(t){
       int a[t];
       for(int i=0;i<t;i++){
           cin>>a[i];
       }
       int curr=0;;
       for(int i=0;i<t;i++){
            curr=0;
            for(int j=i;j<t;j++){
                curr+=a[j];

                cout<<curr<<endl;
            }
       }
       //int curr=0;
    }
    return 0;
}

/*

I/P: 
5
1 2 0 7 2

o/p :
1
3
3
10
2
2
9
0
7
7
*/