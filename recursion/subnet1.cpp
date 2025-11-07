/*
Problem     : Subnet Sum 1.
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 06-11-2025
Description : Given an array print all the unique 
              subset generated from it.

Time Complexity : O(2^n . n log n)
Space Complexity: O(2n) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void rec(int ind,vector <int> ds,int arr[],int n,set <vector<int>> &s){
    if(ind==n){
        sort(ds.begin(),ds.end());
        s.insert(ds);
        return;
    }
    ds.push_back(arr[ind]);
    rec(ind+1,ds,arr,n,s);
    ds.pop_back();
    rec(ind+1,ds,arr,n,s);
}

int main(){
    int arr[]={4,1,0};
    vector <int> ds;
    set <vector<int>> s;
    rec(0,ds,arr,3,s);
    for(auto it:s){
        for(auto x:it)  cout << x << " ";
        cout << endl;
    }
}