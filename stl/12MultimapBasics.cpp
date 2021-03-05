// WAP to show operations using multimap (associative container)

// it is same as map but only diff is it may have multiple values under one pair
#include<iostream>
#include<map> // to use map, multimap we need to include this headerfile
using namespace std;
int main(int argc, char const *argv[]){
    pair<int, int> p = make_pair(10,20);
    cout<<p.first<<"-"<<p.second<<endl;

    multimap<int, int> mp;
    mp.insert(make_pair(70, 700));
    mp.insert(make_pair(50, 500));
    mp.insert(make_pair(30, 300));
    mp.insert(make_pair(90, 900));
    mp.insert(make_pair(20, 200)); 
    mp.insert(make_pair(40, 400)); 

    // Iterate
    for (auto it = mp.begin(); it != mp.end(); it++){ // iterator of map returns a pair
        cout<<it->first<<"----------"<<it->second<<endl; // as iterators are more similar to pointers so we use -> instead of . operator
    }
    
    return 0;
}
/*-----------output---------
10-20
20----------200
30----------300
40----------400
50----------500
70----------700
90----------900
*/