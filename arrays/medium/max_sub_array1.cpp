/*
--------------------------------------------
Problem     : Brute Force Solution To Find
              Longest Consecutive Subarray 
              Size And Position.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 10-06-2025
Description : Given an integer array.Iterate
              through it and find length of
              longest consecutive subarray
              and its position.

Time Complexity : O(n²)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void maxsub(int arr[],int n){
    int maxi=INT_MIN,start,end;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum>maxi)    start=i,end=j;
            maxi=max(sum,maxi);
        }
    }
    cout << "maximum subarray value is : " << maxi << " from index " << start << " to " << end ;
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    maxsub(arr,n);
}