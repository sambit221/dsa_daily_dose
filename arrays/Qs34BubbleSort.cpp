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
    int counter=1;
    while (counter<n){
        for (int i = 0; i < n-counter; i++){
            if (arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    cout<<"\nAfter sorting the array using bubble sort technique it looks alike : "<<endl;
    for (int i = 0; i < n; i++){ // output of array elements
        cout<<arr[i]<<" ";
    }
    return 0;
}
/* ---------output-----------
Size of the array be
5
28 11 22 17 4

After sorting the array using bubble sort technique it looks alike :
4 11 17 22 28
*/