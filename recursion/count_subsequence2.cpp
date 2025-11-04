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

int flag=0;

void sub(int ind,vector <int> ds,int arr[],int n,int target,int sum){
    if(ind==n){
        if(sum==target){
            if(!flag){
                for(auto it:ds) cout << it << " ";
                cout << endl;
                flag=1;
            }
        }
        return;
    }
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    if(flag)    return;
    sub(ind+1,ds,arr,n,target,sum);
    ds.pop_back();
    sum-=arr[ind];
    if(flag)    return;
    sub(ind+1,ds,arr,n,target,sum);
}

int main(){
    int arr[]={4,9,2,5,1};
    vector <int> ds;
    sub(0,ds,arr,5,10,0);
}