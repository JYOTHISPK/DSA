/*
Problem     : lower bound of an array.
Category    : Binary Search
Language    : C++
Author      : Jyothis P K
Date        : 22-10-2025
Description : find the lowest index whose element is 
              greater than or equal to target.
Time Complexity : o(log n) 
Space Complexity: O(1) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int lowerbound(int arr[],int low,int high,int target){
    int ans=high+1;
    while(low<=high){
        int mid=(low+high)/2;
        if(target<=arr[mid]){
            ans=mid,high=mid-1;
        }    
        else low=mid+1;
    }
    return ans;
}

int  main(){
    int arr[]={3,5,8,15,19};
    int ans=lowerbound(arr,0,(sizeof(arr)/sizeof(arr[0]))-1,9);
    cout << "lower bound is " << ans;
}
