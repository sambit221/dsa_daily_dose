// WAP to show operations using unordered_map (associative container)

// it is same as map but only diff is it will be under diff preprocessor and will not be sorted
#include<iostream>
#include<map> // to use map, multimap we need to include this headerfile
#include<unordered_map> // to use unordered map
using namespace std;
int main(int argc, char const *argv[]){
    pair<int, int> p = make_pair(10,20);
    cout<<p.first<<"-"<<p.second<<endl;

    unordered_map<int, int> mp;
    mp[4] = 400;
    mp[3] = 300;
    mp.insert(make_pair(3, 100));
    mp.insert(make_pair(10, 2100));
    mp[10] = 700; // will update the value
    mp.insert(make_pair(20, 900)); 
    mp.insert(make_pair(20, 920)); // will not be updated as same as map
    mp[20] = 700; //updated the value
    
    // Iterate
    for (auto it = mp.begin(); it != mp.end(); it++){ // iterator of map returns a pair
        cout<<it->first<<"----------"<<it->second<<endl; // as iterators are more similar to pointers so we use -> instead of . operator
    }
    
    return 0;
}
/*-----------output---------
10-20
20----------700
4----------400
10----------700
3----------300
*/