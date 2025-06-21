/*
--------------------------------------------
Problem     : Brute Force Solution To Find
              Longest Consecutive Subarray Length
Category    : Arrays
Language    : C++
Author      : Jyothis P K
Date        : 07-06-2025
Description : Given an integer array.Iterate
              through it and find length of
              longest consecutive subarray.

Time Complexity : O(n²)
Space Complexity: O(1)
--------------------------------------------
*/

#include<bits/stdc++.h>
using namespace std;
bool ls(int arr[],int n,int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num)   return true;
    }
    return false;
}
void consec(int arr[],int n){
    int count,maxi=INT_MIN;
    for(int i=0;i<n;i++){
        count=0;
        int x=arr[i];
        while(ls(arr,n,x)==true){
            x++;
            count++;
        }
        maxi=max(maxi,count);
    }
    cout << "length of longest consecutive subarray is " << maxi;
}

int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "enter elements : ";
    for(int i=0;i<n;i++)    cin >> arr[i];
    consec(arr,n);
}