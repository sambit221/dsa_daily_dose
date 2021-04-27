// WAP to sort a list of string on the basis of their length and in dictionary order

#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    return a.length()>b.length();
}

int main(int argc, char const *argv[]){
    string arr[] = {"banana", "pineapple", "apple", "mango", "guava"};
    sort(arr, arr+5);
    cout<<"Sorted in dictionary order"<<endl;
    for (int i = 0; i < 5; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<"\nSorted according to their length"<<endl;
    sort(arr, arr+5, compare);
    for (int i = 0; i < 5; i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}
/*
output:
Sorted in dictionary order
apple  banana  guava  mango  pineapple
Sorted according to their length
pineapple  banana  apple  guava  mango
*/