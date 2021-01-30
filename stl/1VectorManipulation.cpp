/* We have an array of zeros of size n. We will have some queries(tasks) i.e, represented as q. In each query we will have 2 position markers l,r. (l is the starting index and r is the last index). WAP to increase all values in between [l,r] by 1.

Constraints:- n<=10'7
             q<=10'3
*/
// due to this huge constraints we cant use normal brutal force method. 
// usually we were getting querry, solving it, agn got querry agn solve it... but it takes a lot of time
// here we will first solve all the queries then mark required position then at the end increment that position by cumulative sum method.

#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[]){
    // n is no of elements in the array
    int n;
    cin>>n;
    
    // here it is an integer array and its 1st argument is number of elements will be present in the vector array
    // 2nd argument is the element to be filled in the array, if is 0 then it will be an array of zeros
    vector<int> arr(n, 0); // initialising a vector. where vector is an dynamic array

    int q; // queries
    cin>>q;
    while (q--){
        int l, r; // position marker
        cin>>l>>r;
        arr[l]++;
        if(r+1<n){
            arr[r+1]--;
        }
    }
    // cumulative sum
    for (int i = 1; i <n; i++)
    {
        arr[i] += arr[i-1];
    }
    // printing array
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }   
    return 0;
}
/* input---------------------
6
2
2 4
1 3

output------------------
0 1 2 2 1 0
*/