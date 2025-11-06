/*
Problem     : Binary Numbers Upto N Without Consecutive 1 bits.
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 06-11-2025

Time Complexity : O(2^n . n) 
Space Complexity: O(n) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void sub(int ind,vector <char> ds,int n,int c1,int c2){
    if(ind>=n){
        if(c1==c2){
            for(auto it:ds) cout << it << " ";
            cout << endl;
        }
        return;
    }
    ds.push_back('(');
    c1++;
    sub(ind+1,ds,n,c1,c2);
    ds.pop_back();
    c1--;
    ds.push_back(')');
    c2++;
    if(c2>c1)   return;
    sub(ind+1,ds,n,c1,c2);
}

int main(){
    vector <char> ds;
    int n;
    cout << "enter input : ";
    cin >> n;
    sub(0,ds,2*n,0,0);
}