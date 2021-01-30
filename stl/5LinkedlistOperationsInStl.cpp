// WAP to use push_top, push_back and pop_top, pop_back in linked list using stl

#include<iostream>
#include<list>

using namespace std;
int main(int argc, char const *argv[]){
    
    // initialising a linked list using stl
    list <int> li; 
    li.push_back(1);
    li.push_back(2);
    li.push_back(4);
    li.push_back(7);
    li.push_back(8);
    cout<<"After push operation the front element of the linked list is : "<<li.front()<<endl;
    cout<<"After push operation the back element of the stack is : "<<li.back()<<endl;
    li.pop_back();
    li.pop_front();
    cout<<"\n=======================\n"<<endl;
    cout<<"After pop operation at front and back both, the front element of the linked list is : "<<li.front()<<endl;
    cout<<"After pop operation at front and back both, the back element of the stack is : "<<li.back()<<endl;
    return 0;
}

/*---------------output-----------------
After push operation the front element of the linked list is : 1
After push operation the back element of the stack is : 8

=======================

After pop operation at front and back both, the front element of the linked list is : 2
After pop operation at front and back both, the back element of the stack is : 7
*/