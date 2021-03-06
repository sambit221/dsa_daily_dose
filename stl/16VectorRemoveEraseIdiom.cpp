// WAP to showcase remove and erase operations of vector 

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
    v.push_back(40);
    v.push_back(60);
    v.push_back(70);
    cout<<"Size of the vector after pushing elements : "<<v.size()<<endl; // printing size of the array
    // printing elements using loop
    for (auto &val : v){ // accessing all elements using iterator
        cout<<"Value is : "<< val <<endl; 
    }

    auto itr = std::remove(v.begin(),v.end(),40); // storing it in an iterator
    cout<<"\nAfter removing two 40 elements from the vector : "<<endl;
    cout<<"Size of the vector after removing elements : "<<v.size()<<endl;
    for (auto &val : v){ // accessing all elements using iterator
        cout<<"Value is : "<< val <<endl; 
    }

    v.erase(itr,v.end()); // passing iterator (that indicates from where we need to remove unnecessary elements) and end element to delete elements in between
    cout<<"\nAfter erasing unnecessary elements : "<<endl;
    cout<<"Size of the vector after erasing elements : "<<v.size()<<endl;
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
Value is : 40
Value is : 60
Value is : 70

After removing two 40 elements from the vector :
Size of the vector after removing elements : 7
Value is : 10
Value is : 20
Value is : 30
Value is : 60
Value is : 70
Value is : 60
Value is : 70

After erasing unnecessary elements :
Size of the vector after erasing elements : 5
Value is : 10
Value is : 20
Value is : 30
Value is : 60
Value is : 70
*/