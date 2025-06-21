/*
--------------------------------------------
Problem     : Brute Force Solution To Find Missing Element
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 28-05-2025
Description : Given a sorted integer array.Iterate
              through it and store elements in 
              corresponding index of temp array.
              Find the missing element in temp.

Time Complexity : O(n)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void missing(int arr[],int n){
    int temp[n+1];
    for(int i=0;i<n;i++)    temp[arr[i]]++;
    for(int i=1;i<=n;i++){
        if(!temp[i]){
            cout << "missing element is " << i;
            return;
        }
    }
    cout << "no missing element";
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    missing(arr,n);
    
}