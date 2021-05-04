// WAP to show operations of queue using stl

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    queue <string>q;
    q.push("Mango");
    q.push("Guava");
    q.push("Apple");
    q.push("Banana");

    while (!q.empty()){ // while queue is't empty
        cout<<"Front = "<<q.front()<<endl;
        q.pop();
    }
    return 0;
}
/* 
output:
Front = Mango 
Front = Guava 
Front = Apple 
Front = Banana
*/