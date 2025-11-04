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

void sub(int ind,vector <int> ds,int arr[],int n,int target){
    if(ind>=n){
        int sum=0;
        for(auto it : ds)   sum+=it;
        if(sum==target){
            for(auto it : ds) cout << it << " ";
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    sub(ind+1,ds,arr,n,target);
    ds.pop_back();
    sub(ind+1,ds,arr,n,target);
}

int main(){
    int arr[]={4,9,2,5,1};
    vector <int> ds;
    sub(0,ds,arr,5,10);
}