// WAP to show comparator operations to print it in ascending, descending order using set (associative container)

// it dont allows duplicate values and is always in sorted order
#include<iostream>
#include<set> // to use set, multiset we need to include this headerfile
using namespace std;

int main(int argc, char const *argv[]){
    set<int, greater<int>> myset; // dont allow duplicate elements
    myset.insert(300),myset.insert(370),myset.insert(340),myset.insert(3400),myset.insert(3400),myset.insert(356);
    cout<<"\nElements of set1 using greater comparator : "<<endl;    
    for (auto &var : myset){ // Iterate
        cout<<var<<endl; 
    }
    
    set<int, less<int>> myset2; // dont allow duplicate elements
    myset2.insert(100),myset2.insert(70),myset2.insert(40),myset2.insert(30),myset2.insert(100),myset2.insert(40);
    cout<<"\nElements of set2 using less comparator : "<<endl;    
    for (auto &var : myset2){ // Iterate
        cout<<var<<endl; 
    }
   return 0;
}
/*-----------output---------
Elements of set1 using greater comparator : 
3400
370
356
340
300

Elements of set2 using less comparator :
30
40
70
100
*/