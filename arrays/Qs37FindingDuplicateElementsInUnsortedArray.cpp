// Wap to find duplicate elements in an unsorted array

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    int n=10, count=0, arr[]={8,3,6,4,6,5,6,8,2,7};
    for (int i = 0; i < n-1; i++){
        count=1;
        for (int j = i+1; j < n; j++){ 
            if (arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }  
        }
        if (count>1 && arr[i]!=-1) cout<<arr[i]<<" occurs "<<count<<" no of times."<<endl;          
    }
    return 0;
}

/* ---------output-----------
8 occurs 2 no of times.
6 occurs 3 no of times.
*/