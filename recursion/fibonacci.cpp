/*
Problem     : Fibonacci Series.
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 03-11-2025

Time Complexity : o(2^n)  
Space Complexity: O(1) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int rec(int n){
    if(n<=1)    return n;
    int last=rec(n-1);
    int slast=rec(n-2);
    return last+slast;
}

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    int ans=rec(n);
    cout << "fibonacci element at " << n << " th position is " << ans;
}