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

int count1=0;

int sub(int ind,vector <int> ds,int arr[],int n,int target,int sum){
    if(ind==n){
        if(sum==target){
            {
                count1++;
            }
        }
        return count1;
    }
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    count1=sub(ind+1,ds,arr,n,target,sum);
    ds.pop_back();
    sum-=arr[ind];
    count1=sub(ind+1,ds,arr,n,target,sum);
    return count1;
}

int main(){
    int arr[]={4,9,2,5,1};
    vector <int> ds;
    count1=sub(0,ds,arr,5,10,0);
    cout << count1;
}