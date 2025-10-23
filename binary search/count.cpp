/*
Problem     : Number Of Occurance.
Category    : Binary Search
Language    : C++
Author      : Jyothis P K
Date        : 22-10-2025
Description : Find no. of occurance of a particular
              element in a sorted array.
Time Complexity : o(log n) 
Space Complexity: O(1) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int count(int arr[],int n,int target){
    int low=0,high=n-1,ans1=-1,ans2=-1,ans;
    //first occurance
    while(low<=high){
        int mid=(low+high)/2;
        if(target>arr[mid]) low=mid+1;
        else if (target<arr[mid])   high=mid-1;
        else ans1=mid,high=mid-1;
    }
    //last occurance
    low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(target>arr[mid]) low=mid+1;
        else if (target<arr[mid])   high=mid-1;
        else ans2=mid,low=mid+1;
    }
    if(ans1==-1 && ans2==-1)    return -1;
    ans=ans2-ans1;
    return ans+1;
   
}

int  main(){
    int arr[]={2,2,3,3,3,3,4};
    int ans=count(arr,(sizeof(arr)/sizeof(arr[0])),3);
    cout << "count is " << ans;
}
