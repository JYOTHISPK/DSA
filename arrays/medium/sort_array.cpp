/*
--------------------------------------------
Problem     : Sort elements in an array using
              DUTCH NATIONAL FLAG RULE.
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 15-06-2025
Description : Given an integer array having elements 0,1 and 2 only.
              Sort these elements in ascending order using Dutch
              National Flag Rule.

Time Complexity : O(n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void sor(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){  
            swap(arr[mid],arr[low]),mid++,low++;
        }
        else if(arr[mid]==1){
            mid++;
        }    
        else{ 
            swap(arr[mid],arr[high]),high--;
        }
    }
    cout << "sorted array is : ";
    for(int i=0;i<n;i++) cout << arr[i] << " "; 
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements (only 0 1 2) : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    sor(arr,n);
}