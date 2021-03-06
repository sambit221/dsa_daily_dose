// WAP to showcase priority_queue operations using stl

// priority_queue stores elements in descending order(high to low priority)
#include<iostream>
#include<queue> // it have all predefined functions related to priority_queue
using namespace std;

int main(int argc, char const *argv[]){
    // In descending order
    priority_queue<int> q; // here we have created a stack
    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);
    q.push(500);
    q.push(600);

    cout<<"Top elements of priority_queue (q) in descending order (by default lesser comparator) : "<<endl;
    // we can use (q.size() !=0) or (!q.empty()) here inside the loop
    while(!q.empty()){ // if q is not empty(q.empty() returns a boolean value (TRUE or FALSE) and we are using that)
        cout<<"Top : "<<q.top()<<endl; // printing back element
        q.pop(); // popping (top element)
    }

    // In ascending order
    priority_queue<int, vector<int>, std::greater<int>> q1; // here we have created a stack
    q1.push(100);
    q1.push(170);
    q1.push(230);
    q1.push(150);
    q1.push(190);
    q1.push(172);

    cout<<"\nTop elements of priority_queue (q1) in ascending order using greater comparator : "<<endl;
    while(!q1.empty()){ // if q is not empty(q.empty() returns a boolean value (TRUE or FALSE) and we are using that)
        cout<<"Top : "<<q1.top()<<endl; // printing top element
        q1.pop(); // popping (top element)
    }
    return 0;
}
/* -----------output---------------
Top elements of priority_queue (q) in descending order (by default lesser comparator) : 
Top : 600
Top : 500
Top : 400
Top : 300
Top : 200
Top : 100

Top elements of priority_queue (q1) in ascending order using greater comparator :
Top : 100
Top : 150
Top : 170
Top : 172
Top : 190
Top : 230
*/