/*
Problem     : Binary Numbers Upto N.
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

void sub(int ind,vector <int> ds,int n){
    if(ind>=n){
            for(auto it:ds) cout << it << " ";
            cout << endl;
            return;
    }
    ds.push_back(0);
    sub(ind+1,ds,n);
    ds.pop_back();
    ds.push_back(1);
    sub(ind+1,ds,n);
}

int main(){
    vector <int> ds;
    sub(0,ds,3);
}