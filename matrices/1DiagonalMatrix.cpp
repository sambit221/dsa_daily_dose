#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    int n;
    cout<<"Dimension of the matrix is : "<<endl;
    cin>>n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    cout<<" Diagonal matrix:"<<endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i==j)
                cout<<" "<<a[i][j]<<" ";
            else
                cout<<" 0 ";
        }
        cout<<endl;
    }
    return 0;
}
/*-----------output-----------------
Dimension of the matrix is : 
3
1 2 3 4 5 6 7 8 9
 Diagonal matrix:
 1  0  0         
 0  5  0
 0  0  9
*/