/*
--------------------------------------------
Problem     : Find Lower Bound And Upper Bound Of An Element
              In An Array Using Binary Search.
Category    : Binary Search
Language    : C++
Author      : Jyothis P K
Date        : 22-07-2025
Description : Given an array of integers arr which is sorted in
              ascending order,and an integer target, write a function  
              to find lower bound and upper bound of target in arr.
              lowerbound=arr[index]>=target
              upperbound=arr[index]>target

Time Complexity : log n
Space Complexity: O(1) 
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int lower(int arr[],int start,int end,int target){
    int ans=end+1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>=target)    ans=mid,end=mid-1;
        else    start=mid+1;
    }
    return ans;
}

int upper(int arr[],int start,int end,int target){
    int ans=end+1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>target)    ans=mid,end=mid-1;
        else    start=mid+1;
    }
    return ans;
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
    int ans=lower(arr,0,n-1,target);
    int ans1=upper(arr,0,n-1,target);
    cout << "lower bound is " << ans << endl << "upper bound is "<< ans1; 
}