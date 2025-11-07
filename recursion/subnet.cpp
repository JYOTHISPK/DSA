/*
Problem     : Subnet Sum.
Category    : Recursion
Language    : C++
Author      : Jyothis P K
Date        : 06-11-2025
Description : Given an array print all the sum of the 
              subset generated from it.

Time Complexity : O(2^n . n)
Space Complexity: O(n) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void rec(int ind,vector <int> ds,int arr[],int n){
    if(ind==n){
        int sum=0;
        for(int it : ds)  sum+=it;
        cout << sum << " ";
        return;
    }
    ds.push_back(arr[ind]);
    rec(ind+1,ds,arr,n);
    ds.pop_back();
    rec(ind+1,ds,arr,n);
}

int main(){
    int arr[]={5,2,1};
    vector <int> ds;
    rec(0,ds,arr,3);
}