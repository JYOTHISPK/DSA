/*
Problem     : String Palindrome.
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 02-11-2025

Time Complexity : o(n/2) => n is string length. 
Space Complexity: O(1) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

bool pal(char str[],int i,int j){
    if(str[i]!=str[j]) return false; 
    if(i==j)    return true;
    bool ans=pal(str,i+1,j-1);
    return ans;
}

int main(){
    char str[5];
    bool ans;
    cout << "enter a string of size 5 : ";
    cin >> str;
    ans=pal(str,0,4);
    if(ans) cout << "palindrome";
    else    cout << "not palindrome";
}