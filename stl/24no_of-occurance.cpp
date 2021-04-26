// WAP to calculate the no of occurance of an element and also find its lower and upper bound using stl functions (upper-bound, lower-bound)

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
    int a[]= {50, 10, 20, 10, 30, 10, 20, 12, 40, 50, 20, 25, 10, 20};
    int n = sizeof(a)/sizeof(int);
    sort(a,a+n); // sorting will take place in between a and a+n 

    cout<<"After sorting the array is: "<<endl;
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    } 
    // we an use upper-bound, lower-bound only after a sorted array 
    cout<<"\nNo of occurance of 20 is : "<<upper_bound(a,a+n,20) - lower_bound(a,a+n,20)<<endl; 
    cout<<"Upper bound : "<<upper_bound(a,a+n,20)-a<<endl; 
    cout<<"Lower bound : "<<lower_bound(a,a+n,20)-a<<endl; 
    return 0;
}
/* 
After sorting the array is: 
10 10 10 10 12 20 20 20 20 25 30 40 50 50
No of occurance of 20 is : 4
Upper bound : 9
Lower bound : 5 
*/