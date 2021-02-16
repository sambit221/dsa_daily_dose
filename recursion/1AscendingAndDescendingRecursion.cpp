//WAP to show ascending, descending recursion

#include <iostream>
using namespace std;

// Recursion in Ascending order
void fun1(int a){
    if(a>0){
        
        fun1(a-1);
        cout<<a<<"  ";
    }
}

// Recursion in Descending order
void fun2(int a){
    if(a>0){
        cout<<a<<"  ";
        fun1(a-1);
    }
}

int main()
{
    cout<<"Recursion in Ascending order.\n";
    fun1(5);
    cout<<"\nRecursion in Descending order.\n";
    fun2(5);
    return 0;
}
