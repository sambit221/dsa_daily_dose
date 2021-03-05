// WAP to show sort, search algorithms using stl in c++

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[]){
    vector<int> A = {11,2,3,14};
    cout<<"Before sorting A[1] is : "<<A[1]<<endl;
    
    // To sort the elements in the vector
    sort(A.begin(), A.end()); // time complexity for sort O(NlogN)
    // After sort - 2 3 11 14
    cout<<"Before sorting elements of the vector are : "<<endl; 
    for (int i = 0; i < 4; i++){ //printing sorted elements
        cout<<A[i]<<" ";
    }
    
    // To check element is present in the vector or not
    bool present = binary_search(A.begin(), A.end(), 3);
    cout<<"\n3 is there in the vector : "<<present<<endl;
    present = binary_search(A.begin(), A.end(), 4);
    cout<<"4 is there in the vector : "<<present<<endl;
    return 0;
}

/* -----------output---------
Before sorting A[1] is : 2
Before sorting elements of the vector are :
2 3 11 14
3 is there in the vector : 1
4 is there in the vector : 0
*/