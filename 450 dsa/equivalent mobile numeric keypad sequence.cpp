//Convert a sentence into its equivalent mobile numeric keypad sequence

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]){
    string s,op;
    string str[] = {"2","22","222","3","33","333",
                    "4","44","444","5","55","555",
                    "6","66","666","7","77","777","7777",
                    "8","88","888","9","99","999","9999"
                   };
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]==' ')
            op = op+"0";
        else{
            int pos=s[i]-'A';
            op+=str[pos]; 
        }
    }
    cout<<op;
    return 0;
}

/*
Input : GEEKSFORGEEKS 
Output: 4333355777733366677743333557777
*/