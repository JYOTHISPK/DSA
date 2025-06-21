/*
--------------------------------------------
Problem     : Optimal Solution To Find
              Longest Consecutive Subarray Length
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 07-06-2025
Description : Given an integer array.Iterate
              through it after sorting and
              find length of longest consecutive
              subarray.

Time Complexity : O(n log n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void consec(int arr[],int n){
    int count=0,maxi=INT_MIN;
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1)   count++;
        else if(arr[i]==arr[i-1])   continue;
        else    count=0;
        maxi=max(count,maxi);
    }
    cout << "longest consecutive subarray is " << maxi+1;
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    consec(arr,n);
}