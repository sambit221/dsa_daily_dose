// WAP to check the given string is a palindrome or not

#include<iostream>
using namespace std;
int main(int argc, char const *argv[]){
    int n;
    cout<<"size of the string"<<endl;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check = 1;
    for (int i = 0; i < n; i++){
        if (arr[i]!=arr[n-1-i]){ // if not a palindrome then go out of the loop
            check = 0;
            break;
        }
    }
    if(check == true)
        cout<<"It is a palindrome"<<endl;
    else
        cout<<"It is not a palindrome"<<endl;
    return 0;
}
/*----------output-----------------
size of the string
5
nitin
It is a palindrome
*/