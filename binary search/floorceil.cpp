/*
--------------------------------------------
Problem     : Find Floor And Ceil Of An Element
              In An Array Using Binary Search.
Category    : Binary Search
Language    : C++
Author      : Jyothis P K
Date        : 22-07-2025
Description : Given an array of integers arr which is sorted in
              ascending order,and an integer target, write a function  
              to find floor and ceil of target in arr.
              floor=arr[index]<=target
              ceil=arr[index]>=target

Time Complexity : log n
Space Complexity: O(1) 
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int floor(int arr[],int start,int end,int target){
    int floor=start;
    if(target<arr[0])   return -1;
    while(start<=end){
        int mid=(start+end)/2;
        if(target>=arr[mid])    floor=mid,start=mid+1;
        else    end=mid-1;
    }
    return arr[floor];
}

int ceil(int arr[],int start,int end,int target){
    int ceil=end;
    if(target>arr[end]) return -1;
    while(start<=end){
        int mid=(start+end)/2;
        if(target<=arr[mid])    ceil=mid,end=mid-1;
        else    start=mid+1;
    }
    return arr[ceil];
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
    int ans=floor(arr,0,n-1,target);
    int ans1=ceil(arr,0,n-1,target);
    cout << "floor is " << ans << endl << "ceil is " << ans1 ; 
}