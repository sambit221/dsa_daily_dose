// wap using push back, size(), capacity() methods

#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[]){
    vector <int> vec;
    for (int i = 0; i < 32; i++){
        vec.push_back(i);
        cout<<"Size: "<<vec.size()<<" Capacity: "<<vec.capacity()<<endl;
    }
    return 0;
}

/*  ------------output-----------------

Size: 1 Capacity: 1
Size: 2 Capacity: 2
Size: 3 Capacity: 4
Size: 4 Capacity: 4
Size: 5 Capacity: 8
Size: 6 Capacity: 8
Size: 7 Capacity: 8
Size: 8 Capacity: 8
Size: 9 Capacity: 16
Size: 10 Capacity: 16
Size: 11 Capacity: 16
Size: 12 Capacity: 16
Size: 13 Capacity: 16
Size: 14 Capacity: 16
Size: 15 Capacity: 16
Size: 16 Capacity: 16
Size: 17 Capacity: 32
Size: 18 Capacity: 32
Size: 19 Capacity: 32
Size: 20 Capacity: 32
Size: 21 Capacity: 32
Size: 22 Capacity: 32
Size: 23 Capacity: 32
Size: 24 Capacity: 32
Size: 25 Capacity: 32
Size: 26 Capacity: 32
Size: 27 Capacity: 32
Size: 28 Capacity: 32
Size: 29 Capacity: 32
Size: 30 Capacity: 32
Size: 31 Capacity: 32
Size: 32 Capacity: 32
*/