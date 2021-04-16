// Wap to find no of pair of elements with sum=10 in an array

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    int n=10, count=0, arr[]={6,3,8,10,16,7,5,2,9,14};
    for (int i = 0; i < n-1; i++){
        // count=1;
        for (int j = i+1; j < n; j++){ 
            if (arr[i]+arr[j]==10){
                count++;
                // arr[j]=-1;
            }  
        }          
    }
    cout<<count<<" no of pair of elements results their sum to be 10."<<endl;
    return 0;
}

/* ---------output-----------
2 no of pair of elements results their sum to be 10.
*/