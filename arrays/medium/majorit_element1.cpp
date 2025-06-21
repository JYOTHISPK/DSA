/*
--------------------------------------------
Problem     : Brute Force Solution To Find Majority Element
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 08-06-2025
Description : Given an integer array.Iterate
              through it and return the elements
              which appear more than (size/2) times.

Time Complexity : O(n log n)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void majority(int arr[],int n){
    int flag=0;
    map < int,int > mpp;
    for(int i=0;i<n;i++)    mpp[arr[i]]++;
    for(auto it : mpp)  if(it.second>(n/2)) flag=1,  cout << it.first << " is major element\n";
    if(!flag)   cout << "there is no major element";
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    majority(arr,n);
}