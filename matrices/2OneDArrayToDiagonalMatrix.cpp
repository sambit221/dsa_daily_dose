// WAP to convert a 1d array to diagonal matrix

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    int n;
    cout<<"Dimension of the matrix is : "<<endl;
    cin>>n;
    int a[n][n],b[n];
    for (int j = 0; j < n; j++){
            cin>>b[j];
        }
    cout<<" Diagonal matrix:"<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i==j)
                cout<<" "<<b[j]<<" ";
            else
                cout<<" 0 ";
        }
        cout<<endl;
    }
    return 0;
}
/*-----------output-----------------
Dimension of the matrix is : 
4
1 2 3 4
 Diagonal matrix:
 1  0  0  0
 0  2  0  0
 0  0  3  0
 0  0  0  4
*/