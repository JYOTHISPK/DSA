/*
Problem     : Subsequence.
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 03-11-2025

Time Complexity : o(2^n . n) 
Space Complexity: O(n) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void sub(int ind,vector <int> ds,int arr[],int n){
    if(ind>=n){
        for(auto it : ds)   cout << it << " ";
        if(!ds.size())  cout << "{}";
        cout << "\n";
        return;
    }
    ds.push_back(arr[ind]);
    sub(ind+1,ds,arr,n);
    ds.pop_back();
    sub(ind+1,ds,arr,n);
}

int main(){
    int arr[]={1,2,3};
    vector <int> ds;
    sub(0,ds,arr,3);
}