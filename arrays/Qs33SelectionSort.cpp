// Wap to perform binary search in an array

#include<iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int n;
    cout<<"Size of the array be"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){ // input of array elements
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++){  // {'10, "4, 42, 7, 35, 24, 74', 61"}  ''- i, ""- j
        for (int j = i+1; j < n; j++){
            if (arr[i]>arr[j]){ // if 1st half is < 2nd half element  (1st half- sorted, 2nd half-unsorted)
                int temp = arr[j];
                arr[j]=arr[i]; // numbers swapped
                arr[i]=temp;
            }   
        }        
    }
    cout<<"\nAfter sorting the array using selection sort technique it looks alike : ";
    for (int i = 0; i < n; i++){ // output of array elements
        cout<<arr[i]<<" ";
    }
    return 0;
}
/* ---------output-----------
Size of the array be
5
14 7 23 16 4

After sorting the array using selection sort technique it looks alike : 4 7 14 16 23
*/