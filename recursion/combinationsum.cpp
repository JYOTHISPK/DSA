/*
Problem     : Combination Sum.
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 05-11-2025
Description : Given an array of distinct integers and a target,
              you have to return the list of all unique combinations
              where the chosen numbers sum to target. You may return
              the combinations in any order.
              The same number may be chosen from the given array an 
              unlimited number of times. Two combinations are unique
              if the frequency of at least one of the chosen numbers
              is different.

Time Complexity : O(2^n)
Space Complexity: O(n) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void rec(int ind,vector <int> ds,int arr[],int n,int target){
    if(ind==n){
        if(target==0){
        for(auto it:ds) cout << it << " ";
        cout << endl;
        
    }return;
    }
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        rec(ind,ds,arr,5,target-arr[ind]);
        ds.pop_back();
    }
        rec(ind+1,ds,arr,5,target);
    
    
}

int main(){
    int arr[]={4,9,2,5,1};
    vector <int> ds;
    rec(0,ds,arr,5,10);
}