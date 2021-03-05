// WAP to showcase basic operations of list 

// most of the things remains same as vectors
#include<iostream>
#include<vector>
#include<list> // is a doubly linked list
using namespace std;
int main(int argc, char const *argv[]){
    // list is a bidirational itearator
    list<int> v; // it is a sequence container

    // pushing elements into the vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout<<"Size of the list after pushing elements : "<<v.size()<<endl; // printing size of the array
    v.clear(); // clearing all elements from vector. It will make vector an empty vector
    cout<<"Size of the list after clearing all elements: "<<v.size()<<endl;

    // Each container has its own iterator
    // list<int>::iterator itr = v.begin(); // created an iterator = 1st element of list

    /* printing elements using loop
    for (; itr != v.end(); itr++){ // accessing all elements using iterator
        cout<<"Value is : "<< *itr <<endl; // as the loop is incrementing the 
    }
    cout<< "complete";
    */
   return 0;
}
/*-----------output----------------
Size of the list after pushing elements : 5
Size of the list after clearing all elements: 0
*/