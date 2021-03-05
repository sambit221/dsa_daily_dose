// WAP to show operations using normal array same as vectors

#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[]){
    int arr[] = {100,20,300,45,55};
    int *begin = &arr[0];
    int *end = &arr[0] + (sizeof(arr)/sizeof(int));

    sort(begin,end);
    cout<<"Elements are : "<<endl;
    for (; begin != end; begin++){
        cout<<"Value = > "<<*begin<<endl;
    }
    return 0;
}
/*----------output------------------
Elements are :
Value = > 20
Value = > 45
Value = > 55
Value = > 100
Value = > 300
*/