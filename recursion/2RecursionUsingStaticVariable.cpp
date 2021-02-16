//WAP to show recursion using static variable

#include <iostream>
using namespace std;

// Recursion using static variable
int fun1(int a){
    static int x=0;
    if(a>0){
        x++;
        
        return fun1(a-1)+x;
    }
    return 0;
}


int main()
{
    cout<<"Recursion using static variable.\n";
    cout<<fun1(5);
    
    cout<<"\nRecursion using static variable again.\n";
    cout<<fun1(5);
    return 0;
}


/* ---------------output----------------------

Recursion using static variable.
25
Recursion using static variable again.
50

*/