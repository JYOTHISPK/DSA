/*
--------------------------------------------
Problem     : Check Array is sorted
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 26-05-2025
Description : Given an integer array.Iterate
              through it and say that whether
              the elements are sorted or not.

Time Complexity : O(n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void checksort(int arr[],int n){
    int flag=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) flag=0;
    }
    if(!flag)   cout << "array is not sorted";
    else   cout << "array is sorted";
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    checksort(arr,n);
    
}