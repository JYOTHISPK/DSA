/*
--------------------------------------------
Problem     : Check Palindrome
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 13-05-2025
Description : Check whether given string is 
              palindrome or not using recursion.
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

bool rev(int start,int size,string s){
    if(start>=size)
        return true;
    if(s[start]!=s[size])
        return false;
    return rev(start+1,size-1,s);
}

int main(){
    int n,t;
    cout << "enter testbench no. : ";
    cin >> t;
    for(int i=0;i<t;i++){
        string s;
        cout << "enter string : ";
        cin >> s;
        bool b=rev(0,(s.size())-1,s);
        cout << "string is ";
        if(b) cout << "palindrome \n";
        else cout << "not palindrome \n";
    }
}
