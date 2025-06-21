/*
--------------------------------------------
Problem     : Maximum Consecutive Ones In An Array
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 27-05-2025
Description : Given an integer array.Iterate
              through the it and find length
              of maximum consecutive ones.

Time Complexity : O(n)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;

void consecutive(int arr[],int n){
    int count=0,max=0;
    for(int i=0;i<n;i++){
        if(arr[i])  count++;
        else{
            if(max<count)   max=count;
            count=0;
        }
    }
    cout << "maximum consecutive ones is " << max;
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    consecutive(arr,n);
    
}