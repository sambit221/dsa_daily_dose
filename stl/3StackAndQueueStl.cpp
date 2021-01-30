// WAP to use push and pop in stack and queue using stl

#include<iostream>
#include<stack>
#include<queue>

using namespace std;
int main(int argc, char const *argv[]){
    
    // initialising a stack
    stack <int> st; 
    st.push(1);
    st.push(2);
    st.push(4);
    st.push(7);
    st.push(8);
    cout<<"Top element of the stack is : "<<st.top()<<endl;
    st.pop();
    st.pop();
    cout<<"After pop operation the top element of the stack is : "<<st.top()<<endl;

    cout<<"\n=======================\n"<<endl;

    // initialising a queue
    queue <int> qu; 
    qu.push(1);
    qu.push(2);
    qu.push(4);
    qu.push(7);
    qu.push(8);
    cout<<"Top element of the queue is : "<<qu.front()<<endl;
    qu.pop();
    qu.pop();
    cout<<"After pop operation the top element of the queue is : "<<qu.front()<<endl;
    return 0;
}

/*==============output------------------
Top element of the stack is : 8
After pop operation the top element of the stack is : 4

=======================

Top element of the queue is : 1
After pop operation the top element of the queue is : 4
*/