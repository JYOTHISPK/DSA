/*
--------------------------------------------
Problem     : Find Peak Element.
Category    : Binary Search
Language    : C++
Author      : Jyothis P K
Date        : 30-07-2025
Description : Given an array of integers arr , write a function  
              to find peak element (element which is greater than 
              its left and smaller than its right element).Assume
              that array elements are bounded by -infinity.
Time Complexity : o(log n)
Space Complexity: O(1) 
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void peak(int arr[],int n){
    int low=1,high=n-2;
    if(n==1 || arr[0]>arr[1])   cout << arr[0] << " is peak element";
    else if(arr[n-1]>arr[n-2])  cout << arr[n-1] << " is peak element";
    else{
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                cout << arr[mid] << " is peak element";
                break;
            }
            else if(arr[mid]>arr[mid-1])    low=mid+1;
            else if(arr[mid]<arr[mid-1])    high=mid-1;
            else{
                cout << "error , same element repeated";
                break;
            }
        }
    }
}

int main(){
    int n,target;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    peak(arr,n);
}