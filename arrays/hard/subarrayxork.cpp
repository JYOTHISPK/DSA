/*
--------------------------------------------
Problem     : Optimal Solution To Find The Number Of Subarrays 
              With Target XOR Value.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 06-07-2025
Description : Read an array and a target value ,find the number
              of subarrays which gives the target XOR value.

Time Complexity : O(n) or O(n log n)
Space Complexity: O(n) 
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void xxorsub(int arr[],int n,int target){
    int xr=0,count=0;
    map <int,int> mpp;
    mpp[xr]++;
    for(int i=0;i<n;i++){
        xr^=arr[i];
        int x=xr^target;
        count+=mpp[x];
        mpp[x]++;
    }
    cout << endl << count << " is the number of subarrays with xor value " << target;
}

int main(){
    int n,target;
    cout << "enter size of array : ";
    cin >> n;
    cout << "enter elements : ";
    int arr[n];
    for(int i=0;i<n;i++)   cin >> arr[i];
    cout << "enter target xor : ";
    cin >> target;
    xxorsub(arr,n,target);
}