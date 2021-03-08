// Wap to perform binary search in an array

#include<iostream>
using namespace std;

// Binary search Time complexity = O(log n) where as time complexity for linear search is O(n)
int binarySearch(int arr[], int n, int key){ // n is size of array, key is the element to be searched
    int start = 0;
    int end = n;
    while (start <= end){ // these steps will be repeated untill we find the element
        int mid = (start + end)/2; // exact mid term as (index from 0 to 7 but element=8) mid=(0+8)/2=4 
        if(arr[mid]==key)
            return mid; // returning the index where the element is found
        else if(arr[mid]>key){ // mid is greater than key value.. so key must be present in 1st half
            end = mid-1; // moving towards 1st half (making end = previous element of mid)
        }
        else{
            start = mid+1; // moving towards 2nd half (making start = next element of mid)
        }   
    }
    return -1;    
}

int main(int argc, char const *argv[]){
    int n;
    cout<<"Size of the array be"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the value of the key to search : "<<endl;
    cin>>key;
    cout<<binarySearch(arr,n,key); // array name, size of array, key value
    return 0;
}
/* ---------output-----------
Size of the array be
5
10 20 30 40 50
Enter the value of the key to search :
40
3
*/