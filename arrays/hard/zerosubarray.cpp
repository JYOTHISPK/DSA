/*
--------------------------------------------
Problem     : Optimal Solution To Find Longest Zero Subarray Length.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 05-07-2025
Description : Read an array,find the length of longest subarray
              whose sum is 0.

Time Complexity : O(n)
Space Complexity: O(n) 
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

int zerosub(int arr[],int n){
    int maxi=0,sum=0;
    map <int,int> mpp;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(!sum)    maxi=i+1;
        else{
            if(mpp.find(sum)!=mpp.end())    maxi=max(maxi,i-mpp[sum]);
            else    mpp[sum]=i;
        }
    }
    return maxi;
}

int main(){
    int n,target;
    cout << "enter size of array : ";
    cin >> n;
    cout << "enter elements : ";
    int arr[n];
    for(int i=0;i<n;i++)   cin >> arr[i];
    int ans=zerosub(arr,n);
    cout << "length of longest zero subarray is : " << ans;
}