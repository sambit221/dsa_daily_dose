// WAP to show operations of stack using stl

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    stack <string>s;
    s.push("Mango");
    s.push("Guava");
    s.push("Apple");
    s.push("Banana");

    while (!s.empty()){ // while stack is't empty
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
/* 
output:
Banana
Apple
Guava
Mango
*/