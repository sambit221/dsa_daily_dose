// WAP to showcase erase operations of vector 

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
    v.push_back(60);
    v.push_back(70);
    cout<<"Size of the vector after pushing elements : "<<v.size()<<endl; // printing size of the array

    // printing elements using loop
    for (auto &val : v){ // accessing all elements using iterator
        cout<<"Value is : "<< val <<endl; 
    }

    v.erase(v.begin() + 3, v.begin() + 4); // it includes the starting element but excludes the last element of erase function input
    cout<<"\nAfter erasing(v.erase(v.begin() + 3, v.begin() + 4);)---------------\n"<<endl;
    // printing elements using loop
    for (auto &val : v){ // accessing all elements using iterator
        cout<<"Value is : "<< val <<endl; 
    }

    v.erase(v.begin() + 2, v.begin()+4 );
    cout<<"\nAfter erasing(v.erase(v.begin() + 2, v.begin()+4 );)---------------\n"<<endl;
    // printing elements using loop
    for (auto &val : v){ // accessing all elements using iterator
        cout<<"Value is : "<< val <<endl; 
    }

    v.erase(v.begin() + 3, v.end());     
    cout<<"\nAfter erasing(v.erase(v.begin() + 3, v.end());)---------------\n"<<endl;

    // printing elements using loop
    for (auto &val : v){ // accessing all elements using iterator
        cout<<"Value is : "<< val <<endl; 
    }
   return 0;
}
/* ------------output----------------
Size of the vector after pushing elements : 7
Value is : 10
Value is : 20
Value is : 30
Value is : 40
Value is : 50
Value is : 60
Value is : 70

After erasing(v.erase(v.begin() + 3, v.begin() + 4);)---------------

Value is : 10
Value is : 20
Value is : 30
Value is : 50
Value is : 60
Value is : 70

After erasing(v.erase(v.begin() + 2, v.begin()+4 );)---------------

Value is : 10
Value is : 20
Value is : 60
Value is : 70

After erasing(v.erase(v.begin() + 3, v.end());)---------------

Value is : 10
Value is : 20
Value is : 60
*/