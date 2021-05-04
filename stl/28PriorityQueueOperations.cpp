// WAP to show operations of priority_queue using stl

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    priority_queue<int> pq;
    int a[10] = {5,6,17,18,9,11};

    for (int i=0; i<6; i++){ // inserting elements in queue
        pq.push(a[i]);
    }
    // Queue - Max or Min?
    while (!pq.empty()){
        cout<<pq.top()<<", ";
        pq.pop();
    }   
    return 0;
}
/* 
output:
18, 17, 11, 9, 6, 5, 
*/