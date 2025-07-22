/*
--------------------------------------------
Problem     : Find An Element In An Array Using Binary Search.
Category    : Binary Search
Language    : C++
Author      : Jyothis P K
Date        : 22-07-2025
Description : Given an array of integers arr which is sorted in
              ascending order,and an integer target, write a function  
              to search target in arr. If target exists, then return 
              its index. Otherwise, return -1.

Time Complexity : log n
Space Complexity: O(1) 
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int binary(int arr[],int start,int end,int target){
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target)return mid;
        else if(target>arr[mid])    start=mid+1;
        else    end=mid-1;
    }
    return -1;
}

int main(){
    int n,target;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    cout << "enter target : ";
    cin >> target;
    int ans=binary(arr,0,n-1,target);
    if(ans==-1)  cout << "target not found";
    else    cout << target << " is in position " << ans; 
}