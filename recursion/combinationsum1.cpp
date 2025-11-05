/*
Problem     : Combination Sum.
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 05-11-2025
Description : Given a collection of candidate numbers (arr)
              and a target number (target), find all unique 
              combinations in candidates where the candidate 
              numbers sum to target.
              Each number in candidates may only be used once in
              the combination.

Time Complexity : O(2^n . n log n) => n log n for sorting 
Space Complexity: O(2n) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void rec(int ind,vector <int> ds,int arr[],int n,int target,set <vector<int>> &s){
    if(ind==n){
        if(!target){
            sort(ds.begin(),ds.end());
            s.insert(ds);
        }
    return;
    }
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        rec(ind+1,ds,arr,5,target-arr[ind],s);
        ds.pop_back();
    }
        rec(ind+1,ds,arr,5,target,s);
    
    
}

int main(){
    int arr[]={2,5,2,1,2};
    vector <int> ds;
    set <vector<int>> s;
    rec(0,ds,arr,5,5,s);
    for(auto it:s)  {
        for(auto x:it)  cout << x << " ";
        cout << endl;
    }
    
}