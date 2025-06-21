/*
--------------------------------------------
Problem     : Optimal Solution To Find Presence
              Of Subarrays With Given Sum Value.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 17-06-2025
Description : Read an integer array and a value.
              Check the presence of subarray 
              whose sum is given value.

Time Complexity : O(n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void sum1(int arr[],int n){
    int i=0,j=n-1,target;
    cout << "enter target : ";
    cin >> target;
    while(i<j){
        if(arr[i]+arr[j]<target)    i++;
        else if(arr[i]+arr[j]>target)    j--;
        else{
            cout << "YES\n[ " << i << " , " << j << " ]";
            return; 
        }
    }
    cout << "no";
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)    cin >> arr[i];
    sum1(arr,n);
}