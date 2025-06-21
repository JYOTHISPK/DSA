/*
--------------------------------------------
Problem     : Find Leader Elements
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 06-06-2025
Description : Given an integer array.Iterate
              through it and find elements 
              which are greater than all 
              elements in their right side.

Time Complexity : O(n)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void leader(int arr[],int n){
    int maxi=INT_MIN;
    vector < int > v;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi) v.push_back(arr[i]);
        maxi=max(arr[i],maxi);
    }
    cout << "leaders in the array : ";
    for(auto it : v)    cout << it << " ";
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    leader(arr,n);
}