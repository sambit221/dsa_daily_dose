// WAP to show operations using map (associative container)

#include<iostream>
#include<map> // to use map, multimap we need to include this headerfile
using namespace std;
int main(int argc, char const *argv[]){
    pair<int, int> p = make_pair(10,20);
    cout<<p.first<<"-"<<p.second<<endl;

    map<int, int> mp;
    mp[4] = 400;
    mp[3] = 300;
    mp.insert(make_pair(10, 100));
    mp[10] = 700; // Here value got overwritten

    mp.insert(make_pair(20, 900)); // it will be printed
    mp.insert(make_pair(20, 920)); // Here value dont got overwritten as insert fun can only insert elements they can't perform overwrite operation

    // Iterate
    for (auto it = mp.begin(); it != mp.end(); it++){ // iterator of map returns a pair
        cout<<it->first<<"----------"<<it->second<<endl; // as iterators are more similar to pointers so we use -> instead of . operator
    }
    
    return 0;
}
/*-----------output---------
10-20
3----------300
4----------400
10----------700
20----------900
*/