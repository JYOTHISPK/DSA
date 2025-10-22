/*
Problem     : upper bound of an array.
Category    : Binary Search
Language    : C++
Author      : Jyothis P K
Date        : 22-10-2025
Description : find the lowest index whose element is greater than target.
Time Complexity : o(log n) 
Space Complexity: O(1) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int upperbound(int arr[],int n,int target){
    int low=0,high=n-1,ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(target>=arr[mid])    low=mid+1;
        else    ans=mid,high=mid-1;
    }
    return ans;
   
}

int  main(){
    int arr[]={1,2,2,3};
    int ans=upperbound(arr,(sizeof(arr)/sizeof(arr[0]))-1,9);
    cout << "upper bound is " << ans;
}
