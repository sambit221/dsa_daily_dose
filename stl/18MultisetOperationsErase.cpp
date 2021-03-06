// WAP to show erase operation using multiset (associative container)

// it allows duplicate values and is always in sorted order
#include<iostream>
#include<map> // to use map, multimap we need to include this headerfile
#include<set> // to use map, multimap we need to include this headerfile
using namespace std;

int main(int argc, char const *argv[]){
    map<int, string> mymap;

    multiset<int> myset; // allows element repeatation
    myset.insert(100),myset.insert(70),myset.insert(40),myset.insert(30),myset.insert(100),myset.insert(40);

    cout<<"Elements are : "<<endl;
    for (auto &setval : myset){ // Iterate
        cout<<setval<<endl; 
    }
    myset.erase(40);
    cout<<"\nAfter erasing 40 the elements are : "<<endl;
    for (auto &setval : myset){ // Iterate
        cout<<setval<<endl; 
    }
    myset.erase(myset.begin());
    cout<<"\nAfter erasing the 1st element multiset looks alike : "<<endl;
    for (auto &setval : myset){ // Iterate
        cout<<setval<<endl; 
    }

    return 0;
}
/*-----------output---------
Elements are : 
30
40
40
70
100
100

After erasing 40 the elements are :
30
70
100
100

After erasing the 1st element multiset looks alike :
70
100
100
*/