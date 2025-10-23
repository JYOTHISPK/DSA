/*
Problem     : Element In A Rotated Sorted Array.
Category    : Binary Search
Language    : C++
Author      : Jyothis P K
Date        : 23-10-2025
Description : Find the presence of an element in a
              rotated sorted array .
Time Complexity : o(log n) 
Space Complexity: O(1) 
---------------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

bool rotated(int arr[],int n,int target){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target)    return true;
        if(arr[low]<=arr[mid]){
            if(target>=arr[low] && target < arr[mid])   high=mid-1;
            else    low=mid+1;
        }
        else{
            if(target<=arr[high] && target > arr[mid])   low=mid+1;
            else    high=mid-1;
        }
    }
    return false;
}

int  main(){
    int arr[]={7,8,1,2,3,4,5,6};
    bool ans=rotated(arr,(sizeof(arr)/sizeof(arr[0])),3);
    cout << boolalpha << "output : " << ans;
}
