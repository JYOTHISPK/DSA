/*
--------------------------------------------
Problem     : Brute Force Solution To Find Single Element
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 01-06-2025
Description : Given a integer array.Iterate through 
              it and mark elements in corresponding
              hash map then find the element in hash
              map with value 1.

Time Complexity : O(n log n)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void single(int arr[],int n){
    map <int,int > mpp;
    for(int i=0;i<n;i++)    mpp[arr[i]]++;
    for(auto it:mpp){
        if(it.second==1){  
            cout << "single element is " << it.first;
            return;  
        }
    }
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    single(arr,n);
    
}