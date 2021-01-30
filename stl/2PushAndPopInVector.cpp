// WAP to push and pop in vectors using stl

#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[]){
    vector <int> arr(1,0); // initialised a vector with 0 as value of all the elements and the size of the vector is 1 
    cout<<"Size of the vector at the beginning : "<<arr.size()<<endl;

    // pushing elements
    for (int i = 0; i < 9; i++){
        arr.push_back(i);
    }
    cout<<"After pushing the vector looks alike :- "<<endl;
    for (int i = 0; i<arr.size() ; i++){
        printf("Element %d : %d\n", i, arr[i]);
    }

    cout<<"\n=======================\n"<<endl;
    // popping elements
    for (int i = 0; i < 3; i++){
        arr.pop_back();
    }

    cout<<"After popping the vector looks alike :- "<<endl;
    for (int i = 0; i<arr.size() ; i++){
        printf("Element %d : %d\n", i, arr[i]);
    }
    return 0;
}

/*------------output--------------------
Size of the vector at the beginning : 1
After pushing the vector looks alike :-
Element 0 : 0
Element 1 : 0
Element 2 : 1
Element 3 : 2
Element 4 : 3
Element 5 : 4
Element 6 : 5
Element 7 : 6
Element 8 : 7
Element 9 : 8

=======================

After popping the vector looks alike :-
Element 0 : 0
Element 1 : 0
Element 2 : 1
Element 3 : 2
Element 4 : 3
Element 5 : 4
Element 6 : 5
*/