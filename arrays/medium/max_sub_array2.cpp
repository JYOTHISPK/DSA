/*
--------------------------------------------
Problem     : To Find Longest Consecutive 
              Subarray Elements And Size.
              (KADANE'S ALGORITHM)
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 10-06-2025
Description : Given an integer array.Iterate
              through it and find length of
              longest consecutive subarray
              elements and its size.

Time Complexity : O(n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void maxsub(int arr[],int n){
    int maxi=INT_MIN;
    int sum=0,start,end;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0)   start=i+1,sum=0;
        if(sum>maxi) end=i;
        maxi=max(sum,maxi);
    }
    cout << "max subarray value is " << maxi << endl;
    cout << "maximum subarray is : ";
    for(int i=start;i<=end;i++)  cout << arr[i] << " ";   
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