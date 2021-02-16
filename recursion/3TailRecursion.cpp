//WAP to show tail recursion 

#include <iostream>
using namespace std;

// Tail Recursion
int fun1(int a){
    if(a>0){
    	printf(" %d ",a);
        return fun1(a-1);
    }
    return 0;
}

// using loop
int fun2(int a){
    while(a>0){
        printf(" %d ",a);
        a--;
    }
    return 0;
}

int main()
{
    cout<<"Tail Recursion.\n";
    cout<<fun1(5);
    
    cout<<"\nUsing loop.\n";
    cout<<fun2(5);
    return 0;
}

/* ---------------output------------------
Tail Recursion.
 5  4  3  2  1 0
Using loop.
 5  4  3  2  1 0
 
*/
