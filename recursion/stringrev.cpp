/*
Problem     : String Reverse.
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 02-11-2025

Time Complexity : o(n) => n is string length. 
Space Complexity: O(1) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void rec(char str[],int i){
    if(str[i]=='\0')    return;
    rec(str,i+1);
    cout << str[i];
}

int main(){
    char str[10];
    cout << "enter a string : ";
    cin >> str;
    rec(str,0);
}