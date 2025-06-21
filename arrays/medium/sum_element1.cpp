/*
--------------------------------------------
Problem     : Brute Force Solution To Find 
              Presence Of Subarrays With Given
              Sum Value.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 17-06-2025
Description : Read an integer array and a value.
              Check the presence of subarray 
              whose sum is given value.

Time Complexity : O(n)
Space Complexity: O(n)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void sum1(int arr[],int n){
    int t,flag=0,more=0,i;
    unordered_map < int,int > mpp;
    cout << "enter target : ";
    cin >> t;
    for(i=0;i<n;i++){
        more=t-arr[i];
        if(mpp.find(more)!=mpp.end()){   
            flag=1;
            break;
        }
        mpp[arr[i]]=i;
    }
    if(flag)    cout << " YES\n[" << mpp[more] << " , " << i << " ] ";
    else    cout << "NO";
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)    cin >> arr[i];
    sum1(arr,n);
}