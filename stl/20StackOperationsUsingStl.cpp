// WAP to showcase stack operations using stl

#include<iostream>
#include<stack> // it have all predefined functions related to stack
using namespace std;

int main(int argc, char const *argv[]){
    stack<int> stk; // here we have created a stack
    stk.push(100);
    stk.push(200);
    stk.push(300);

    cout<<"Stack elements are : "<<endl;
    // we can use (stk.size() !=0) or (!stk.empty()) here inside the loop
    while(!stk.empty()){ // if stk is not empty(stk.empty() returns a boolean value (TRUE or FALSE) and we are using that)
        cout<<stk.top()<<endl; // printing top element
        stk.pop(); // popping (top element)
    }
    return 0;
}
/* -----------output---------------
Stack elements are : 
300
200
100
*/