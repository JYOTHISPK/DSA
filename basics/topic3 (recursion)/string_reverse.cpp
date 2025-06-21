/*
--------------------------------------------
Problem     : Reverse String
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 17-05-2025
Description : Given a string.Reverse the characters
              of the string using recursion.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void rev(int start,int size,string& s){
    if(start>=size)
        return;
    swap(s[start],s[size]);
    rev(start+1,size-1,s);
}

int main(){
    int n,t;
    cout << "enter testbench no. : ";
    cin >> t;
    for(int i=0;i<t;i++){
        string s;
        cout << "enter string : ";
        cin >> s;
        rev(0,(s.size())-1,s);
        cout << "reversed string is : ";
        cout << s;
        cout << "\n";
    }
}
