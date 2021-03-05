// WAP to showcase basic operations of vector 

#include<iostream>
#include<algorithm> // To use sort, search algos directly
#include<vector> // is contiguous memory allocation
using namespace std;

int main(int argc, char const *argv[]){
    vector<int> v; // it is a sequence container
    // pushing elements into the vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout<<"Size of the vector after pushing elements : "<<v.size()<<endl; // printing size of the array
    v.clear(); // clearing all elements from vector. It will make vector an empty vector
    cout<<"Size of the vector after clearing all elements: "<<v.size()<<endl;

    // Each container has its own iterator
    vector<int>::iterator itr = v.begin(); // created an iterator = 1st element of vector
    cout<<"\nelement at index 0 is : "<< *itr <<endl; // quite similar to pointers (1st element at 0th index)
    cout<<"element at index 1 is : "<< *(itr+1) <<endl;
    cout<<"element at index 2 is : "<< *(itr+2) <<endl;
    cout<<"element at index 3 is : "<< *(itr+3) <<endl;
    cout<<"element at index 4 is : "<< *(itr+4) <<endl;

    // printing elements using loop
    /*for (; itr != v.end(); itr++){ // accessing all elements using iterator
        cout<<"Value is : "<< *itr <<endl; // as the loop is incrementing the 
    }
    cout<< "complete";
    */
    sort(v.begin(), v.end());
    cout<<"\nAfter sorting the elements are : " <<endl;
    cout<<"element at index 0 is : "<< *itr <<endl; 
    cout<<"element at index 1 is : "<< *(itr+1) <<endl;
    cout<<"element at index 2 is : "<< *(itr+2) <<endl;
    cout<<"element at index 3 is : "<< *(itr+3) <<endl;
    cout<<"element at index 4 is : "<< *(itr+4) <<endl;
   return 0;
}
/* ------------output----------------
Size of the vector after pushing elements : 5
Size of the vector after clearing all elements: 0

element at index 0 is : 10
element at index 1 is : 20
element at index 2 is : 30
element at index 3 is : 40
element at index 4 is : 50

After sorting the elements are :
element at index 0 is : 10
element at index 1 is : 20
element at index 2 is : 30
element at index 3 is : 40
element at index 4 is : 50

*/