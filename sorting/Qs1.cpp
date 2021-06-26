//sort on the basis of salary. if salary is equal print in lexio graphical order
#include<bits/stdc++.h>
using namespace std;
#define ll 				long long
#define lli 			long long int
#define pb   			push_back 
#define mp 				make_pair 
#define mod 			1000000007 
#define ps(x,y)			fixed<<setprecision(y)<<x; 
int getIthBit(int n, int i) {return (n & (1<<i))!=0 ? 1:0;}

bool cmp(pair<string,int>p1,pair<string,int>p2){
    if(p1.second==p2.second){
        return p1.first<p2.first;
    }
    return p1.second>p2.second;
}

int main(int argc, char const *argv[]){
    int t,min; cin>>min; cin>>t;
    pair<string,int>emp[1000];
    for(int i=0;i<t;i++){
        string s;
        int a;
       cin>>s>>a;
        emp[i].first=s;
        emp[i].second=a;
    }
    sort(emp, emp+t,cmp);
    for(int i=0;i<t;i++){
        if(emp[i].second>min){
            cout<<"First : "<<emp[i].first<<" Second : "<<emp[i].second<<endl;
        }
    }
    return 0;
}

/* input 
78
5
sam 65       
arun 32
adi41
56   
hi 32
dami 91

output
First : dami Second : 91
First : sam Second : 65
First : adi41 Second : 56
First : arun Second : 32
First : hi Second : 32
*/