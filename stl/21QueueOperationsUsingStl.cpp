// WAP to showcase queue operations using stl

#include<iostream>
#include<queue> // it have all predefined functions related to queue
using namespace std;

int main(int argc, char const *argv[]){
    queue<int> q; // here we have created a stack
    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);
    q.push(500);
    q.push(600);

    cout<<"Queue elements are (with gradual pop): "<<endl;
    // we can use (q.size() !=0) or (!q.empty()) here inside the loop
    while(!q.empty()){ // if q is not empty(q.empty() returns a boolean value (TRUE or FALSE) and we are using that)
        cout<<"Front : "<<q.front()<<endl; // printing top element
        cout<<"Back : "<<q.back()<<endl; // printing back element
        q.pop(); // popping (top element)
    }
    return 0;
}
/* -----------output---------------
Queue elements are (with gradual pop): 
Front : 100
Back : 600
Front : 200
Back : 600
Front : 300
Back : 600
Front : 400
Back : 600
Front : 500
Back : 600
Front : 600
Back : 600
*/