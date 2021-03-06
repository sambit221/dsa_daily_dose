// WAP to show operations using set (associative container)

// it dont allows duplicate values and is always in sorted order
#include<iostream>
#include<map> // to use map, multimap we need to include this headerfile
#include<set> // to use set, multiset we need to include this headerfile
using namespace std;

int main(int argc, char const *argv[]){
    map<int, string> mymap;

    set<int> myset;
    myset.insert(100),myset.insert(70),myset.insert(40),myset.insert(30),myset.insert(100),myset.insert(40);

    cout<<"Elements are : "<<endl;
    // Iterate
    for (auto &setval : myset){ 
        cout<<setval<<endl; 
    }
    
    return 0;
}
/*-----------output---------
Elements are : 
30
40
70
100
*/