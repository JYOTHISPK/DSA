/*
--------------------------------------------
Problem     : Find Sub Array Size With Given Value
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 02-06-2025
Description : Given a integer array.Iterate through all
              subarrays and compare it with given value.
              If they are equal,diplay its size.

Time Complexity : O(n²)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void sub(int arr[],int n){
    int num,limit=0,count;
    cout << "enter subarray value : ";
    cin >> num;
    for(int i=0;i<n;i++){
        int sum=0;
        count=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            count++;
        }
        if(sum==num)    limit=max(limit,count);
    }
    if(!count){  
        cout << "no subarray found";
        return;
    }
    cout << "sub array size is" << count;
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >>  arr[i];
    sub(arr,n);
}