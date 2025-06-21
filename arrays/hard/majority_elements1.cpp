/*
--------------------------------------------
Problem     : Brute Force Solution To Find Majority Element
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 20-06-2025
Description : Given an integer array.Iterate
              through it and return the elements
              which appear more than (size/3) times.

Time Complexity : O(n log n)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void major(int arr[],int n){
    int major=n/3,flag=0;
    map < int,int > mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]]==major+1){
            flag=1;
            cout << "\n" << arr[i] << " is a major element";
        }
    }
    if(!flag)   cout << "there is no major element";
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    cout << "enter elements : ";
    int arr[n];
    for(int i=0;i<n;i++)    cin >> arr[i];
    major(arr,n);
}