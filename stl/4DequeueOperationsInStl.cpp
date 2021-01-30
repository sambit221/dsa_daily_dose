// WAP to use push and pop in stack , queue, dequeue using stl

#include<iostream>
#include<stack>
#include<queue>
#include<deque>

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

    cout<<"\n=======================\n"<<endl;

    // initialising a deque
    deque <int> dqu; 
    dqu.push_back(1);
    dqu.push_back(2);
    dqu.push_back(4);
    dqu.push_back(7);
    dqu.push_back(8);
    cout<<"After push at back, the front element of the queue is : "<<dqu.front()<<endl;
    cout<<"After push at back, the back element of the queue is : "<<dqu.back()<<endl;
    dqu.pop_back();
    dqu.pop_front();
    cout<<"After pop at back and front both, the front element of the queue is : "<<dqu.front()<<endl;
    cout<<"After pop at back and front both, the back element of the queue is : "<<dqu.back()<<endl;
    return 0;
}

/*==============output------------------
Top element of the stack is : 8
After pop operation the top element of the stack is : 4

=======================

Top element of the queue is : 1
After pop operation the top element of the queue is : 4

=======================

After push at back, the front element of the queue is : 1
After push at back, the back element of the queue is : 8
After pop at back and front both, the front element of the queue is : 2
After pop at back and front both, the back element of the queue is : 7
*/